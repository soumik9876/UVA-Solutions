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
int factors[101][101];
bool prime[101];
int main()
{
    //KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
	int n;
	
	for(int i=2;i<=100;i++)
	{
		if(prime[i]==false)
		{
			for(int j=i;j<=100;j+=i)
			{
				int num=j,cnt=0;
				while(num%i==0)
				{
					cnt++;
					num/=i;
				}
				factors[j][i]+=cnt;
				prime[j]=true;
			}
		}
	}
	
	//for(int i=2;i<=5;i++)
	//{
		//for(int j=2;j<=5;j++)
		//{
			//cout<<i<<" "<<j<<" "<<factors[i][j]<<endl;
		//}
	//}
	for(int i=2;i<=100;i++)
	{
		for(int j=2;j<=100;j++)
		{
			factors[j][i]+=factors[j-1][i];
		}
	}
	
	while(cin>>n && n)
	{
		printf("%3d! =",n);
		int cnt=0;
		for(int i=2;i<=100;i++)
		{
			if(factors[n][i])
			{
				if(cnt!=0 && cnt%15==0)
					cout<<endl<<"      ";
				printf("%3d",factors[n][i]);
				cnt++;
				
				
			}
		}
		cout<<endl;
	}
    return 0;
}

