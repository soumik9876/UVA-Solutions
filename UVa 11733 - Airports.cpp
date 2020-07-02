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
int representative(int node,vi &parents)
{
    return (parents[node]==node)?node:parents[node]=representative(parents[node],parents);
}
int main()
{
    KAMEHAMEHA
    #ifdef _soumik
        freopen("input.txt", "r", stdin);
    #endif
    int t;
    cin>>t;
    for(int i1=1;i1<=t;i1++)
    {
        int n,m,a;
        cin>>n>>m>>a;
        vector <tuple<int,int,int> >edges;
        for(int j=0;j<m;j++)
        {
            int u,v,cost;
            cin>>u>>v>>cost;
            edges.eb(cost,u,v);
        }
        int airport=0,city=0,total=0;
        vector<int> parents(n+10);
        vector<bool> taken(n+10);
        for(int i=1;i<=n;i++)
            parents[i]=i;
        sort(all(edges));
        for(int i=0;i<m;i++)
        {
            int city1=get<1>(edges[i]);
            int city2=get<2>(edges[i]);
            int cst=get<0>(edges[i]);
            //cout<<cst<<endl;
            if(cst>=a)
            {
                break;
            }
            int r1=representative(city1,parents),r2=representative(city2,parents);
            if(r1!=r2)
            {
                parents[r2]=r1;
                total+=cst;
                if(!taken[city1])
                {
                    taken[city1]=true;
                    city++;
                }
                if(!taken[city1])
                {
                    taken[city1]=true;
                    city++;
                }
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(parents[i]==i)
            {
                airport++;
                total+=a;
            }
        }
        cout<<"Case #"<<i1<<": "<<total<< " "<<airport<<endl;
    }
    return 0;
}


