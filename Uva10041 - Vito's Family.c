#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,i,j,street[501],mid,temp,sum;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        temp=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&street[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(street[j]>street[j+1])
                {
                    temp=street[j];
                    street[j]=street[j+1];
                    street[j+1]=temp;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            mid=(n-1)/2;
            if(((n-1)%2)!=0)
                mid++;
            sum+=abs(street[mid]-street[i]);
        }
        printf("%d\n",sum);
    }
    return 0;
}
