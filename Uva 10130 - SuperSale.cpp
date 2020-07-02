#include<bits/stdc++.h>
#define endl '\n'
#define time clock_t tStart = clock();
#define show printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll                    long long int
#define loop(a,b)             for(int i=a;i<=b;++i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define vll                   vector<ll>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
#define eb                    emplace_back
using namespace std;
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    ll t,n,g;
    cin>>t;
    while(t--)
    {
        vll weights,prices,capacity;
        ll g,w,p,c,maxcap=0;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            cin>>p>>w;
            weights.eb(w),prices.eb(p);
        }
        cin>>g;
        for(ll i=0;i<g;i++)
        {
            cin>>c;
            if(maxcap<c)
                maxcap=c;
            capacity.eb(c);
        }
        ll knapsack[n+5][maxcap+5];
        for(ll i=0;i<=n;i++)
        {
            for(ll j=0;j<=maxcap;j++)
            {
                //cout<<j<<" "<<weights[i-1]<<endl;
                if(i==0 || j==0)
                    knapsack[i][j]=0;

                else if(j>=weights[i-1])
                {
                    knapsack[i][j]=max(prices[i-1]+knapsack[i-1][j-weights[i-1]],knapsack[i-1][j]);
                    //cout<<"Here"<<endl;
                }
                else
                    knapsack[i][j]=knapsack[i-1][j];
                    //cout<<prices[i-1]+knapsack[i-1][j-weights[i-1]]<< " "<<prices[i-1]<<" "<<knapsack[i][j]<<endl;
            }
        }
//        for(ll i=0;i<=n;i++)
//        {
//            for(ll j=0;j<=maxcap;j++)
//                cout<<knapsack[i][j]<< " ";
//            cout<<endl;
//        }
        ll total=0;
        for(ll i=0;i<g;i++)
        {
            total+=knapsack[n][capacity[i]];
        }
        cout<<total<<endl;
    }

   // show
    return 0;
}
void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cout.setf(ios::fixed);
    //cout.precision(20);
#ifndef _offline
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
}

