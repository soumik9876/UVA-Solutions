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
int main()
{
    KAMEHAMEHA
    #ifdef _soumik
        freopen("input.txt", "r", stdin);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector < pair<double,double> > nodes;
        vector<pair<int,double>> graph[n+10];
        for(int i=0;i<n;i++)
        {
            double a,b;
            cin>>a>>b;
            nodes.eb(a,b);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                    continue;
                double dist=sqrt((nodes[i].F-nodes[j].F)*(nodes[i].F-nodes[j].F)+(nodes[i].S-nodes[j].S)*(nodes[i].S-nodes[j].S));
                graph[i].eb(j,dist);
            }
        }
        double total=0;
        int cnt=0;
        priority_queue < pair<double,int>,vector< pair<double,int> >,greater< pair<double,int> > > pq;
        vector<bool> taken(n+10);
//        for(int i=0;i<n;i++)
//        {
//            for(int j=0;j<graph[i].size();j++)
//            {
//                cout<<i<< " "<<graph[i][j].F<<" "<<graph[i][j].S<<endl;
//            }
//        }
        for(auto i:graph[0])
            pq.push(mp(i.S,i.F));
        taken[0]=true;
        cnt++;
        while(!pq.empty())
        {
            pair<double,int> top=pq.top();
            pq.pop();
            if(taken[top.S])
                continue;
            //cout<<top.F<<" "<<top.S<<endl;
            total+=top.F;
            taken[top.S]=true;
            cnt++;
            if(cnt==n)
                break;
            for(auto i:graph[top.S])
            {
                pq.push(mp(i.S,i.F));
            }
        }
        cout<<fixed<<setprecision(2)<<total<<endl;
        if(t)
            cout<<endl;
    }

    return 0;
}

