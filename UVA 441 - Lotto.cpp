#include<bits/stdc++.h>
#define endl '\n'
#define time clock_t tStart = clock();
#define show printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll long long int
#define loop(a,b)           for(int i=a;i<=b;++i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define vll                   vector<ll>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
#define eb                    emplace_back
using namespace std;
vll nums;
ll k;
vll com;
void print(ll n,ll cnt);

void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();

    while(cin>>k && k)
    {
        ll temp;
        nums.clear();
        for(ll i=0;i<k;i++)
        {
            cin>>temp;
            nums.pb(temp);
        }
        print(0, 0);
    }


   // show
    return 0;
}

void print(ll n,ll cnt)
{
    if(cnt>=6) {

        for(ll i=0;i<6;i++)
            cout<<com[i]<< " ";
        cout << endl;
        return;
    }

    for(ll i=1;i<=k-5;i++)
    {
        com.pb(nums[cnt]);
        print(n+i,cnt+1);
        com.pop_back();

    }
}
void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cout.setf(ios::fixed);
    //cout.precision(20);
#ifndef _offline
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
}

