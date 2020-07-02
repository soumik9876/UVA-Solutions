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
int representative(int node,vi &parent)
{
    if(parent[node]==node)
        return node;
    //cerr<<node<< " "<<parent[node]<<endl;
    parent[node]=representative(parent[node],parent);
    return parent[node];
}
int main()
{
    //KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
    int t;
    cin>>t;
    while(t--)
    {
        char nodes;
        cin>>nodes;
        getchar();
        int node=nodes-64;
        vi parent(node+10);
        for(int i=1;i<=node;i++)
            parent[i]=i;
        while(1)
        {
            string edge;
            getline(cin,edge);
            if(edge=="\0")
                break;
            int node1=edge[0]-64,node2=edge[1]-64,r1=representative(node1,parent),r2=representative(node2,parent);
            //cout<<node1<< " "<<node2<< " "<<r1<< " "<<r2<<endl;
            if(r1!=r2)
            {
                parent[r1]=r2;
            }
        }
        int cnt=0;
        for(int i=1;i<=node;i++)
        {
            //cout<<i<< " "<<parent[i]<<endl;
            if(parent[i]==i)
                cnt++;
        }
        cout<<cnt<<endl;
        if(t)
            cout<<endl;
    }
    return 0;
}

