#include<bits/stdc++.h>
#define time clock_t tStart = clock();
#define show printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll                    long long int
#define loop(a,b)             for(int i=a;i<=b;++i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define vx                    vector< vector<int> >
#define vll                   vector<ll>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
#define eb                    emplace_back
#define ull                   unsigned long long
#define KAMEHAMEHA            ios_base::sync_with_stdio(0);
#define RASENGAN              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void dfs(vx &graph,vector<bool> &visited,int node)
{
    for(auto i:graph[node])
    {
        if(visited[i])
            continue ;
        visited[i]=true;
        dfs(graph,visited,i);
    }
}
int main()
{
    KAMEHAMEHA
#ifdef _soumik
    freopen("input.txt", "r", stdin);
#endif
    int n;
    while(cin>>n && n)
    {
        vx graph(n+10);
        int node;

        while(cin>>node && node)
        {
            int temp;
            while(cin>>temp && temp)
            {
                if(temp)
                    graph[node].eb(temp);
            }
        }
        int q;
        cin>>q;
        while(q--)
        {
            int start;
            vector<bool> visited(n+1);
            vi visits;
            cin>>start;
            dfs(graph,visited,start);
            for(int i=1; i<=n; i++)
            {
                if(!visited[i])
                    visits.eb(i);
            }
            cout<<visits.size();
            for(auto i:visits)
                cout<<" "<<i;
            cout<<endl;
        }
    }
    return 0;
}


