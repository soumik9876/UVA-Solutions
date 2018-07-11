#include<stdio.h>
int main()
{
    int t,n,i,temp,temp1,cnt[10]={0,0,0,0,0,0,0,0,0,0};
    scanf("%d",&t);
    while(t--)
    {
        for(i=0;i<10;i++)
            cnt[i]=0;
        scanf("%d",&n);
        for(i=0;i<=n;i++)
        {
            temp1=i;
            while(temp1!=0)
            {
                temp=temp1%10;
                temp1=temp1/10;
                cnt[temp]++;
            }
        }
        for(i=0;i<9;i++)
            printf("%d ",cnt[i]);
        printf("%d\n",cnt[9]);
    }
    return 0;
}
