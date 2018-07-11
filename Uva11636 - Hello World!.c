#include<stdio.h>
#include<math.h>
int main()
{
    int n,x=0,i,total;
    while(scanf("%d",&n))
    {
        x++;
        if(n<0)
            break;
        i=0;
        while(1)
        {
        total=pow(2,i);
        if(total>=n)
            break;
        i++;
        }
    printf("Case %d: %d\n",x,i);
    }
    return 0;
}
