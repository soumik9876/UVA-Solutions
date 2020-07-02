#include<bits/stdc++.h>
#define ll                    long long int
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define MOD                   1000000007
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
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector< pii > graph[n+10];
        int dist[n+10];
        for(int i=1;i<=m;i++)
        {
            int u,v,c;
            cin>>u>>v>>c;
            graph[u].eb(v,c);
        }

        bool check=false;
        dist[0]=0;
        for(int i=1;i<n;i++) dist[i]=INT_MAX;

        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(auto k:graph[j])
                {
                    dist[k.F]=min(dist[k.F],dist[j]+k.S);
                    if(dist[k.F]<0)
                    {
                        check=true;
                        break;
                    }
                }
                if(check)
                    break;
            }
            if(check)
                break;
        }

        if(!check)
        {
            for(int j=0;j<n;j++)
            {
                for(auto k:graph[j])
                {
                    if(dist[k.F]>dist[j]+k.S)
                    {
                        check=true;
                        break;
                    }
                }
                if(check)
                    break;
            }
        }

        if(check)
            cout<<"possible"<<endl;
        else
            cout<<"not possible"<<endl;
    }
    return 0;
}


