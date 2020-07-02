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
int representative(vi &parent,vi &child,int node)
{
    if(parent[node]==node)
        return node;
    parent[node]=representative(parent,child,parent[node]);
    return parent[node];
}
int main()
{
    KAMEHAMEHA
    #ifdef _soumik
        freopen("input.txt", "r", stdin);
    #endif
    int c,r;
    while(cin>>c>>r && (c || r))
    {
        int track=1;
        map<string,int> nodes;
        vi parent(c+10),child(c+10);
        for(int i=0;i<c;i++)
        {
            string city;
            cin>>city;
            if(nodes.find(city)==nodes.end())
                nodes[city]=track++;
        }
        for(int i=1;i<=c;i++)
        {
            parent[i]=i;
            child[i]=1;
        }
        for(int i=0;i<r;i++)
        {
            string a,b;
            cin>>a>>b;
            int r1=representative(parent,child,nodes[a]),r2=representative(parent,child,nodes[b]);
            if(r1!=r2)
            {
                parent[r2]=r1;
                child[r1]+=child[r2],child[r2]=0;
            }
        }
        int cnt=0,mx=0;
        for(int i=1;i<=c;i++)
        {
            if(mx<child[i])
                mx=child[i];
            //cout<<child[i]<<" "<<parent[i]<<endl;
        }
        cout<<mx<<endl;
    }
    return 0;
}

