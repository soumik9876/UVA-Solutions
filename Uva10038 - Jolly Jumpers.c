#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,temp,checkjolly,diff,sum,diffsum;
    while(scanf("%d",&n)!=EOF)
    {
        checkjolly=1;
        temp=0;
        diffsum=0;
        sum=0;
        scanf("%d",&i);
        for(j=1;j<n;j++)
        {
            temp=i;
            scanf("%d",&i);
            diff=abs(temp-i);
            diffsum=diffsum+diff;
            sum=sum+j;
            if(diff>(n-1) || diff==0)
                checkjolly=0;
        }
        if(sum!=diffsum)
            checkjolly=0;
        if(checkjolly==1)
            printf("Jolly\n");
        else if(checkjolly==0)
            printf("Not jolly\n");
    }
    return 0;
}
