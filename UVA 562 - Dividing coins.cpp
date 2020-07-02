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
    #ifdef _soumik
        freopen("input.txt", "r", stdin);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
        int n,total=0;
        cin>>n;
        vi a(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            total+=a[i];
        }
        int half=total/2;
       // cout<<total<<endl;
        int dp[half+1];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<=n;i++)
        {
            for(int j=half;j>=a[i];j--)
            {
                dp[j]=max(dp[j-a[i]]+a[i],dp[j]);
            }
            //cout<<endl;
        }
        //cout<<dp[half]<<endl;
        cout<<abs(2*dp[half]-total)<<endl;
    }
    return 0;
}


