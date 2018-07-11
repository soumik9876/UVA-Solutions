#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    double shortest,quickest,diff,d,v,u;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf %lf",&d,&v,&u);
        quickest=d/u;
        shortest=d/(u*(sin(acos(v/u))));
        diff=shortest-quickest;
        if(u>v && v!=0)
            printf("Case %d: %.3lf\n",i,diff);
        else
            printf("Case %d: can't determine\n",i);
    }
    return 0;
}
