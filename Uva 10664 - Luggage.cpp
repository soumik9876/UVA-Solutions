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
        vi weights;

        while(cin>>n)
        {
            weights.eb(n);
            total+=n;
            if(cin.peek()=='\n') break;
        }

        if(total%2)
        {
            cout<<"NO"<<endl;
            continue;
        }

        int nums=weights.size(),half=total/2,dp[half+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=nums;i++)
        {
            for(int j=half;j>=weights[i-1];j--)
            {
                dp[j]=max(dp[j],dp[j-weights[i-1]]+weights[i-1]);
            }
        }

        //cout<<dp[half]<<endl;
        if(dp[half]==half)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}


