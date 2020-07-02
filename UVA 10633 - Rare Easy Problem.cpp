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
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
	ll n;
	while(cin>>n && n)
	{
		ll low=n,high=LLONG_MAX,mid;
		vll ns;
		while(low<=high)
		{
			mid=low+((high-low)/2);
			ll num=mid/10;
			num=mid-num;
			//cout<<num<<" "<<mid<<endl;
			if(num<n)
			{
				low=mid+1;
			}
			else if(num>n)
			{
				high=mid-1;
			}
			else
			{
				ns.eb(mid);
				ll up=mid,down=mid;
				while(1)
				{
					up++;
					num=up/10;
					num=up-num;
					//cout<<up<<" "<<num<<endl;
					if(num!=n)
						break;
					else
						ns.eb(up);
				}
				while(1)
				{
					down--;
					num=down/10;
					num=down-num;
					if(num!=n)
						break;
					else
						ns.eb(down);
				}
				break;
			}
			
		}
		sort(all(ns));
		ll sz=ns.size();
		cout<<ns[0];
		for(ll i=1;i<sz;i++)
			cout<<" "<<ns[i];
		cout<<endl;
	}
    return 0;
}

