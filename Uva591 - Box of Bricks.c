#include<stdio.h>
int main()
{
    int n,i=0,j,h[51],sum,avg,moves;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        i++;
        sum=0;
        moves=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&h[j]);
            sum+=h[j];
        }
        avg=sum/n;
        for(j=0;j<n;j++)
        {
            if(h[j]>avg)
                moves+=(h[j]-avg);
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",i,moves);
    }
    return 0;
}
