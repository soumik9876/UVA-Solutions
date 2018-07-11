#include<stdio.h>
int main()
{
    int t,n,p,q,sum,i,weight[31],j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&n,&p,&q);
        sum=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&weight[j]);
        }
        for(j=0;j<p && j<n;j++)
        {
            sum=sum+weight[j];
            if(sum>q)
                break;
        }
        printf("Case %d: %d\n",i,j);
    }
    return 0;
}
