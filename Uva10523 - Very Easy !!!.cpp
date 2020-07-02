#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
    long long int n,a,i,sum;
    while(scanf("%lld %lld",&n,&a)!=EOF)
    {
        sum=0;
        for(i=1;i<=n;i++)
        {
            sum+=i*pow(a,i);
        }
        cout<<sum<<endl;
    }
    return 0;
}
