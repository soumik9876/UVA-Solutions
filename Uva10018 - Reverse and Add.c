#include<stdio.h>
int main()
{
    int t,cnt;
    long long int temp,n,rev,temp1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        cnt=0;
        while(1)
        {
        rev=0;
        temp1=n;
        while(temp1!=0)
        {
            temp=temp1%10;
            temp1=temp1/10;
            rev=(rev*10)+temp;
        }
        if(rev==n)
            break;
        n=n+rev;
        cnt++;
        }
        printf("%d %lld\n",cnt,rev);
    }
    return 0;
}
