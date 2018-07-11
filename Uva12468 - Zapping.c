#include<stdio.h>
int main()
{
    int a,b,zap;
    while(scanf("%d %d",&a,&b))
    {
        if(a<0 && b<0)
            break;
        zap=b-a;
        if(b<a)
        {
            if(zap<-50)
                zap=100+zap;
            else
                zap=-zap;
        }
        else if(zap>50)
            zap=100-zap;
        printf("%d\n",zap);
    }
    return 0;
}
