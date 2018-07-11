#include<stdio.h>
int main()
{
    int n,first,last,i,sum,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        scanf("%d%d",&first,&last);
        sum=0;
        for(i=first;i<=last;i++)
        {
            if(i%2!=0)
            sum=sum+i;
        }
        printf("Case %d: %d\n",j,sum);
    }
    return 0;
}
