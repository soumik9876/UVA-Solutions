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
    vi coins;
    for(int i=1;i<=21;i++)
        coins.eb(i*i*i);
    ll n;
    while(cin>>n)
    {
        vll dp(n+1);
        dp[0]=1;
        for(ll i=0;i<21;i++)
        {
            for(ll j=coins[i];j<=n;j++)
            {
                dp[j]+=dp[j-coins[i]];
            }
        }
        cout<<dp[n]<<endl;
    }
    return 0;
}


