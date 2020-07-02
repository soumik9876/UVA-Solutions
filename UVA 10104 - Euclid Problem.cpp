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
#define eb                    emplace_back
#define ull                   unsigned long long
#define bug(x)				  cout<<"  [ "#x<<" = "<<x<<" ]"<<endl;
#define KAMEHAMEHA            ios_base::sync_with_stdio(0);
#define RASENGAN              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
ll egcd(ll a,ll b,ll & x,ll & y)
{
	if(a==0)
	{
		x=0,y=1;
		return b;
	}	
	ll x1,y1;
	ll g=egcd(b%a,a,x1,y1);
	x=y1-((b/a)*x1);
	y=x1;
	return g;
}
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
	ll a,b;
	while(cin>>a>>b)
	{
		ll x,y;
		ll ans=egcd(a,b,x,y);
		if(x>y && a==b) swap(x,y);
		cout<<x<<" "<<y<<" "<<ans<<endl;
	}
    return 0;
}

