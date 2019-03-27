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
void FAST_IO();
int main()
{
    //_time_
    //FAST_IO();
   double c,s;
   ll k=1;
    while(cin>>c>>s)
    {
        vector<double> specimens;
        double total=0;
        for(ll i=0;i<s;i++)
        {
            double temp;
            cin>>temp;
            specimens.pb(temp);
            total+=temp;
        }
        total/=c;
        for(ll i=s;i<2*c;i++)
        {
            specimens.pb(0);
        }
        sort(specimens.begin(),specimens.end());
        cout<<"Set #"<<k++<<endl;
        double imbalance=0;
        //cout<<total<<endl;
        for(ll i=0;i<c;i++)
        {
            cout<<" " <<i<<":";
            if(specimens[i]>0)
                cout<<" "<<specimens[i]<< " "<<specimens[2*c-i-1];
            else if(specimens[2*c-i-1]>0)
                cout<<" "<<specimens[2*c-i-1];
            cout<<endl;
            imbalance+=abs(total-(specimens[i]+specimens[2*c-i-1]));

        }
        printf("IMBALANCE = %.5lf\n\n",imbalance);
    }


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

