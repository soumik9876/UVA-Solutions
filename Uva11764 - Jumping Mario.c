#include<stdio.h>
int main()
{
    int t,n,height,temp,high,low,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        high=0;
        low=0;
        scanf("%d",&height);
        n--;
        temp=height;
        while(n--)
        {
            scanf("%d",&height);
            if(temp>height)
                low++;
            else if(temp<height)
                high++;
            temp=height;
        }
        printf("Case %d: %d %d\n",i,high,low);
    }
    return 0;
}
