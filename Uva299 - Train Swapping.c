#include<stdio.h>
int main()
{
    int n,l,c[51],i,j,temp,cnt;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&l);
        cnt=0;
        for(i=0;i<l;i++)
            scanf("%d",&c[i]);
        for(i=0;i<l;i++)
        {
            for(j=0;j<l-1;j++)
            {
                if(c[j]>c[j+1])
                {
                    temp=c[j];
                    c[j]=c[j+1];
                    c[j+1]=temp;
                    cnt++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",cnt);
    }
    return 0;
}

