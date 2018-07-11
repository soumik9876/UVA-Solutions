#include<stdio.h>
int main()
{
    int i,grade[1001],t,n;
    double sum,cnt;
    double avg,above;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        cnt=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&grade[i]);
            sum+=grade[i];
        }
        avg=sum/n;
        for(i=0;i<n;i++)
        {
            if(grade[i]>avg)
                cnt++;
        }
        above=(cnt*100)/n;
        printf("%.3lf%%\n",above);
    }
    return 0;
}
