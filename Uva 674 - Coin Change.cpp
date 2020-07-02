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
ll coins[]={50,25,10,5,1},dp[6][7550];
ll total(ll i,ll sum)
{
    if(i>=5)
    {
        if(sum==0)
            return 1;
        return 0;
    }
    ll way1=0,way2=0;
    if(dp[i][sum]!=-1) return dp[i][sum];
    if(sum-coins[i]>=0)
        way1=total(i,sum-coins[i]);
    way2=total(i+1,sum);
    return dp[i][sum]=way1+way2;
}
int main()
{
    KAMEHAMEHA
    #ifdef _soumik
        freopen("input.txt", "r", stdin);
    #endif
    ll n;
    memset(dp,-1,sizeof(dp));
    while(cin>>n)
    {
        cout<<total(0,n)<<endl;
    }
    return 0;
}

