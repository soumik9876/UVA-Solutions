
// Problem : 10226 - Hardwood Species
// Contest : UVa Online Judge
// URL : https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1167
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
	int t;
	cin>>t;
	string s;
	getline(cin,s);
	getline(cin,s);
	while(t--)
	{
		
		map<string,double> cnt;
		double total=0;
		
		while(getline(cin,s) && s!="\n")
		{
			//cout<<s<<endl;
			if(s.length()==0)
				break;
			cnt[s]+=1;
			total+=1;
		}
		for(auto x: cnt)
		{
			double ans=(double)x.S/total;
			ans*=100;
			cout<<fixed<<setprecision(4)<<x.F<<" "<<ans<<endl;
		}
		if(t)
			cout<<endl;
	}
    return 0;
}

