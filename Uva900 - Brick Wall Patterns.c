#include<stdio.h>
int main()
{
    long long int n,total,a,b,i;
    while(scanf("%lld",&n))
    {
        a=1;
        b=2;
        if(n==0)
            break;
        for(i=1;i<=n;i++)
        {
            if(i==1)
                total=a;
            else if(i==2)
                total=b;
            else{
                total=a+b;
                a=b;
                b=total;
            }
        }
            printf("%lld\n",total);
    }
    return 0;
}
