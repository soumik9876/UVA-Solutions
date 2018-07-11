#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,i,sum;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        sum=0;
        for(i=1;i<=n;i++)
        {
            if(i==1)
                sum=1;
            else
                sum=sum+(i*i);
        }
        printf("%d\n",sum);
    }
    return 0;
}
