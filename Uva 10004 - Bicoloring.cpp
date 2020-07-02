#include<iostream>
#include<vector>
#include<queue>
using namespace std;
bool visited[201];
bool bicolor(vector<int> G[],int col[],queue<int> nodes);
int main()
{
    int l,n,x,y;
    while(cin>>n && n)
    {
        cin>>l;
        queue<int> nodes;
        vector<int> G[201];
        int color[201];
        for(int i=0;i<n;i++)
            visited[i]=false;
        for(int i=0;i<n;i++)
            color[i]=0;
        for(int i=0;i<l;i++)
        {
            cin>>x>>y;
            G[x].push_back(y);
            G[y].push_back(x);
        }
        if(bicolor(G,color,nodes))
            cout<<"BICOLORABLE.\n";
        else
            cout<<"NOT BICOLORABLE.\n";
    }
    return 0;
}
bool bicolor(vector<int> G[],int col[],queue<int> nodes)
{
    nodes.push(0);
    visited[0]=true;
    col[0]=1;
    while(!nodes.empty())
    {
        //cout<<col[0]<<endl;
        int u=nodes.front();
        nodes.pop();
        for(int i=0;i<G[u].size();i++)
        {
            //cout<<col[u]<<" "<<col[G[u][i]]<<endl;
            if(col[G[u][i]]==col[u])
                    return false;
            if(!visited[G[u][i]])
            {
                visited[G[u][i]]=true;
                nodes.push(G[u][i]);
                //cout<<u<<" "<<G[u][i]<<endl;
                if(col[u]==1)
                    col[G[u][i]]=2;
                else
                    col[G[u][i]]=1;
            }
        }
    }
    return true;
}


