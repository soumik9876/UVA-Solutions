#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b);
void FAST_IO();
int main()
{
    long long int n,m[105],i,j,t,maxx;
    FAST_IO();
    char c;
    cin>>n;
    //cout<<gcd(16,7);
    while(n--)
    {
        maxx=0;
        for(i=0;;i++)
        {
            scanf("%lld",&m[i]);
            while ((c = getchar()) == ' ');
            ungetc(c, stdin);
            if(c==10 || c==-1)
                break;
        }
        t=i+1;
        for(i=0;i<t-1;i++)
        {
            for(j=i+1;j<t;j++)
            {
                if(gcd(m[i],m[j])>maxx)
                    maxx=gcd(m[i],m[j]);
            }
        }
        cout<<maxx<<endl;
    }
    return 0;
}
long long int gcd(long long int a,long long int b)
{
    if(a>b)
    {
        if(a%b==0)
            return b;
        return gcd(b,a%b);
    }
    else
    {
        if(b%a==0)
            return a;
        return gcd(a,b%a);
    }
}
void FAST_IO()
{
    //ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
    //cout.setf(ios::fixed);
    //cout.precision(20);
#ifndef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
