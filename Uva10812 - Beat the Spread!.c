#include<stdio.h>
int main()
{
    long long int n,s,d,m,i;
    scanf("%d",&i);
    while(i--)
    {
        scanf("%lld %lld",&s,&d);
        m=(s+d)/2;
        n=(s-d)/2;
        if(d>s || (s+d)%2!=0 || (s-d)%2!=0)
            printf("impossible\n");
        else
            printf("%lld %lld\n",m,n);
    }
    return 0;
}
