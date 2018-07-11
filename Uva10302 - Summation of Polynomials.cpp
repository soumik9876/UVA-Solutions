#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
    long long int i,sum,n;
    while(scanf("%lld",&n)!=EOF)
    {
        sum=0;
        for(i=1;i<=n;i++)
        {
            sum=sum+(i*i*i);
        }
        printf("%lld\n",sum);
    }
    return 0;
}
