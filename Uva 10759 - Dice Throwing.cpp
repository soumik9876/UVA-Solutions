#include<bits/stdc++.h>
#define endl '\n'
#define time clock_t tStart = clock();
#define show printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll                    unsigned long long int
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

using namespace std;
void FAST_IO();
ll dice(ll diceLeft,ll value);
ll gcd(ll a,ll b);
ll dp[25][151],x=150;
int main()
{
    //_time_
    //FAST_IO();
    ll n;

//    cout<<dice(24,0)<<endl;
//    cout<<dp[3][9]<<endl;
    while(cin>>n>>x && (n || x))
    {
        for(int i=0;i<25;i++)
        {
            for(int j=0;j<151;j++)
                dp[i][j]=-1;
        }

        ll total=round(pow(6,n));
        ll current=dice(n,0);

        ll g=gcd(total,current);
        current/=g;
        total/=g;
        //cout<<current<< " "<<total<< " " <<gcd(total,current)<< endl;
        ll rat=current/total;
        //printf("%lld\n",pow(6,n));
        if(current==0 || current==total)
            cout<<rat<<endl;
        else
            cout<<current<<"/"<<total<<endl;
    }


   // show
    return 0;
}
void FAST_IO()
{
    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
    //cout.setf(ios::fixed);
    //cout.precision(20);
#ifndef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
ll dice(ll diceLeft,ll value)
{
    if(diceLeft==0)
    {
        if(value>=x)
            return 1;
        else
            return 0;
    }
    if(dp[diceLeft][value]!=-1)
        return dp[diceLeft][value];
    ll ans=0;
    for(ll i=1;i<=6;i++)
        ans+=dice(diceLeft-1,value+i);
    dp[diceLeft][value]=ans;
    return dp[diceLeft][value];
}
ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}
