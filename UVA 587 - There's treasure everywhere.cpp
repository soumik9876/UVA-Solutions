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
   string s;
   ll c=1;
   while(cin>>s)
   {
       if(s=="END")
        break;
       ll sz=s.size();
       double num=0,multi=1;
       double x=0,y=0;
       cout<<"Map #"<<c++<<endl;
       for(ll i=0;i<sz;i++)
       {
           //cout<<num<<endl;
           if(s[i]>='0' && s[i]<='9')
           {
               num=(num*10)+(s[i]-48);
           }
           else
           {
           if(s[i]=='N')
           {
               if(s[i+1]=='E')
                    {
                        x+=(1/sqrt(2))*num;
                        y+=(1/sqrt(2))*num;
                        i++;
                    }
                else if(s[i+1]=='W')
                {
                    x-=(1/sqrt(2))*num;
                    y+=(1/sqrt(2))*num;
                    i++;
                }
                else

                {
                        y+=num;
                        continue;
                }
           }
           else if(s[i]=='S')
           {
               if(s[i+1]=='E')
                    {
                        x+=(1/sqrt(2))*num;
                        y-=(1/sqrt(2))*num;
                        i++;
                    }
                else if(s[i+1]=='W')
                {
                    x-=(1/sqrt(2))*num;
                    y-=(1/sqrt(2))*num;
                    i++;
                }
                else

                {
                    y-=num;
                    continue;
                }
           }
           else if(s[i]=='E')
           {
               x+=num;
               continue;
           }
           else if(s[i]=='W')
           {
               x-=num;
               continue;
           }
           else if(s[i]==',' || s[i]=='.')
                num=0;
           }
       }
       cout<<fixed<<setprecision(3);
       cout<<"The treasure is located at ("<<x<<","<<y<<")."<<endl;
       double total=sqrt((x*x)+(y*y));
       cout<<"The distance to the treasure is "<<total<<"."<<endl<<endl;
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
    freopen("output.txt", "w", stdout);
#endif
}
