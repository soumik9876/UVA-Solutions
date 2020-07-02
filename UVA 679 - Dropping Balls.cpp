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
ll pos;
void position(ll start,ll d,ll current,bool b[]);
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    ll t;

    while(cin>>t && t!=-1)
    {
        while(t--)
        {
        ll d,balls;
        cin>>d>>balls;
        balls=(balls%(d+1));
        if(!balls)
            balls=d+1;
        ll l=pow(2,d)-1;
        bool b[l];
        ll en=pow(2,(d-1))-1;
        memset(b,false,sizeof(b));
        for(ll i=1;i<=balls;i++)
        {
            position(1,en,1,b);
        }
        cout<<pos<<endl;
        }
    }

   // show
    return 0;
}
void position(ll start,ll d,ll current,bool b[])
{
    if(start>d)
    {
        pos=start;
        return ;
    }
    if(b[start])
    {
        b[start]=false;
        position((2*start)+1,d,current+1,b);
    }
    else
    {
        b[start]=true;
        position((2*start),d,current+1,b);
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

