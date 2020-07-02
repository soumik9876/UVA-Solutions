#include<bits/stdc++.h>
#define endl '\n'
#define time clock_t tStart = clock();
#define show printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll                    long long int
#define loop(a,b)             for(int i=a;i<=b;++i)
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

using namespace std;
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    ll n,mnyear=INT_MAX,mnday=INT_MAX,mnmonth=INT_MAX,mxday=0,mxmonth=0,mxyear=0;
    string mn,mx;
    cin>>n;
    while(n--)
    {
        string s;
        ll d,m,y;
        cin>>s>>d>>m>>y;
        if(y<mnyear)
        {
            mnyear=y;
            mnmonth=m;
            mnday=d;
            mn=s;
        }
        else if(y==mnyear)
        {
            if(m<mnmonth)
            {
                mnyear=y;
                mnmonth=m;
                mnday=d;
                mn=s;
            }
            else if(m==mnmonth && d<mnday)
            {
                mnyear=y;
                mnmonth=m;
                mnday=d;
                mn=s;
            }
        }
        if(y>mxyear)
        {
            mxyear=y;
            mxmonth=m;
            mxday=d;
            mx=s;
        }
        else if(y==mxyear)
        {
            if(m>mxmonth)
            {
                mxyear=y;
                mxmonth=m;
                mxday=d;
                mx=s;
            }
            else if(m==mxmonth && d>mxday)
            {
                mxyear=y;
                mxmonth=m;
                mxday=d;
                mx=s;
            }
        }
    }
    cout<<mx<<endl<<mn<<endl;
   // show
    return 0;
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

