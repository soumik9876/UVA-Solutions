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
struct edge{
    int a,b,weight;
};
int main()
{
    KAMEHAMEHA
    #ifdef _soumik
        freopen("input.txt", "r", stdin);
    #endif
    int n,r,cs=1;
    while(cin>>n>>r && (n>0 && r>0))
    {
        string s,d;
        map <string,int> city;
        vector<pii> graph[n+10];
        vector<bool> taken(n+10);
        vi nodes;
        priority_queue<pii> pq;
        int track=1;
        for(int i=0;i<r;i++)
        {
            int t;
            cin>>s>>d>>t;
            if(city.find(s)==city.end())
                city[s]=track++;
            if(city.find(d)==city.end())
                city[d]=track++;
            graph[city[s]].eb(t,city[d]);
            graph[city[d]].eb(t,city[s]);
        }
        cin>>s>>d;
        int start=city[s],dest=city[d],mn=INT_MAX;
        taken[start]=true;

        for(auto i:graph[start])
            pq.push(mp(i.F,i.S));
        //cout<<pq.top().F<< " "<<pq.top().S<<endl;
        while(!pq.empty())
        {
           pii top = pq.top() ;
           pq.pop() ;
           if(taken[top.S])
                continue ;
           mn = min(mn,top.F);
           taken[top.S] = true;
           if(top.S==dest)
                break;
           for(auto x : graph[top.S] ){
                pq.push(x) ;
           }

        }
        cout<<"Scenario #"<< cs++<<endl<<mn<<" tons"<<endl<<endl;
    }
    return 0;
}


