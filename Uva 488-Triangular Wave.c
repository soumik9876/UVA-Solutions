#include<stdio.h>
int main()
{
    int t,a,f,row,col,cnt=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&f);
        while(f--)
        {
            cnt=0;
            for(row=0;row<=a && row>=0;)
            {
                cnt++;
                if(cnt<=a)
                    row++;
                else
                    row--;
                for(col=1;col<=row;col++)
                {
                    printf("%d",row);
                }
                if(row==0 && t==0 && f==0)
                    break;
                if(row<0)
                    break;
                printf("\n");
            }
        }
    }
    return 0;
}
