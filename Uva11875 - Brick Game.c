#include<stdio.h>
int main()
{
    int t,n,age,cap,i,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        cap=0;
        for(j=1;j<=n;j++)
        {
            scanf("%d",&age);
            if(j==(n/2)+1)
                cap=age;
        }
        printf("Case %d: %d\n",i,cap);
    }
    return 0;
}
