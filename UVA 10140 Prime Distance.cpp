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
const int N=46500;
bool isprime[N+10];
vll primes;
void sieve()
{
	isprime[1]=true;
	primes.eb(2);
	for(ll i=3;i<N;i+=2)
	{
		if(!isprime[i])
		{
			primes.eb(i);
			for(ll j=i*i;j<N;j+=i)
			{
				isprime[j]=true;
			}			
		}
	}
	
}
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif	
	ll low,high;
	sieve();
	while(cin>>low>>high)
	{
		bool segprime[high-low+1]={};
		vll p;
		//for(int i=0;i<20;i++)
			//cout<<primes[i]<<endl;
		if(low==1)
			segprime[0]=true;
		for(auto i: primes)
		{
			if(i*i>high)
			{
				break;
			}
			ll start=ceil((double)low/i)*i;
			if(start==i) start*=2;
			for(ll j=start;j<=high;j+=i)
			{
				segprime[j-low]=true;
			}
		}
		for(int i=0;i<=high-low;i++)
		{
			if(!segprime[i])
				p.eb(i+low);
		}
		int sz=p.size(),a=-1,b=-1,c=-1,d=-1;
		for(int i=0;i<sz-1;i++)
		{
			//cout<<p[i]<<endl;
			if(p[i+1]-p[i]<b-a || a==-1)
				b=p[i+1],a=p[i];
			if(p[i+1]-p[i]>d-c || c==-1)
				d=p[i+1],c=p[i];
		}
		if(a==-1)
			cout<<"There are no adjacent primes."<<endl;
		else
			cout<<a<<","<<b<<" are closest, "<<c<<","<<d<<" are most distant."<<endl;
	}
    return 0;	
}

