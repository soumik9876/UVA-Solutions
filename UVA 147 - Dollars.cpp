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
    //KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
    double n;
    while(cin>>n && n!=0.00)
    {
        int coins[]={10000,5000,2000,1000,500,200,100,50,20,10,5};
        //cout<<n<<endl;
        int target=round(n*100.0);
        //cout<<n*100<<endl;
        vector<ull> dp(target+1);
        dp[0]=1;
        for(int i=10;i>=0;i--)
        {
            for(int j=coins[i];j<=target;j++)
            {
                dp[j]+=dp[j-coins[i]];
                //cout<<dp[j]<<" ";
            }
        }
        //cout<<target<<endl;
        cout.width(6);
        cout<<fixed<<setprecision(2)<<n;
        cout.width(17);
        cout<<dp[target]<<endl;
//        printf("%6.2lf%17d\n",n,dp[target]);
    }
    return 0;
}


