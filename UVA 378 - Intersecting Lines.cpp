#include<bits/stdc++.h>
#define nl '\n'
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
    ll t;
    cin>>t;
    cout<<"INTERSECTING LINES OUTPUT\n";
    while(t--)
    {
        double x1,x2,x3,x4,y1,y2,y3,y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        double a1=y2-y1;
        double b1=x1-x2;
        double c1=(a1*x1)+(b1*y1);
        double a2 = y4 - y3;
        double b2 = x3 - x4;
        double c2=(a2*x3)+(b2*y3);
        double det=(a1*b2)-(a2*b1);
        double dx=b2*c1 - b1*c2;
        double dy=a1*c2 - a2*c1;
        if(det==0 && (dx || dy))
            cout<<"NONE\n";
        else if(det==0 && dx==0 && dy==0)
            cout<<"LINE\n";
        else
            printf("POINT %.2lf %.2lf\n",dx/det,dy/det);
            //cout<<"POINT "<<fixed<<setprecision(2)<<(double)dx/det<< " " <<(double)dy/det<<endl;
    }
    cout<<"END OF OUTPUT\n";
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
    freopen("output.txt", "w", stdout);
#endif
}
