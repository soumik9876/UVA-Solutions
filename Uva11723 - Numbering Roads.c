#include<stdio.h>
int main()
{
    int r,n,total,i=0;
    while(scanf("%d %d",&r,&n))
    {
        i++;
        if(r==0 && n==0)
            break;
        total=((r-n)/n);
        if((r-n)%n!=0)
            total=total+1;
        if(n>=r)
            total=0;
        if(total>26)
            printf("Case %d: impossible\n",i);
        else
            printf("Case %d: %d\n",i,total);
    }
    return 0;
}
