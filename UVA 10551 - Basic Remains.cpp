
// Problem : 10551 - Basic Remains
// Contest : UVa Online Judge
// URL : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1492
// Memory Limit : 32.000000 MB 
// Time Limit : 3000.000000 milisec 
// Powered by CP Editor (https://github.com/coder3101/cp-editor)

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
#define bug(x)				  if(0)cout<<"  [ "#x<<" = "<<x<<" ]"<<endl;
#define ull                   unsigned long long
#define KAMEHAMEHA            ios_base::sync_with_stdio(0);
#define RASENGAN              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
ll c2d(string m,ll b)
{
	ll ans=0;
	for(int i=m.size()-1,cnt=0;i>=0;i--)
	{
		ll d=m[i]-'0';
		ans+=(d*pow(b,cnt++));
	}
	return ans;
}

ll bigmod(ll b,ll p,ll m)
{
	if(p==0)
		return 1%m;
	ll x=bigmod(b,p/2,m);
	x=(x*x)%m;
	if(p%2)
		x=(x*b)%m;
	return x;
}
void cfd(ll d,ll b)
{
	string ans="";
	if(!d)
		cout<<0;
	while(d)
	{
		ans+=((d%b)+'0');
		d=(d/b);
	}
	reverse(all(ans));
	cout<<ans<<endl;
}
void sol(ll b)
{
	string num,m;
	cin>>num>>m;
	ll dec=c2d(m,b),ans=0;
	//bug(dec);
	for(int i=num.size()-1,cnt=0;i>=0;i--)
	{
		ll d=num[i]-'0';
		ll temp=bigmod(b,cnt++,dec);
		//bug(temp);
		temp=(temp*d)%dec;
		ans=(temp+ans)%dec;
	}
	cfd(ans,b);
}


int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
	ll b;
	
	while(cin>>b && b!=0)
	{
		sol(b);
		
	}
    return 0;
}

