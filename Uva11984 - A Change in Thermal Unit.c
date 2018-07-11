#include<stdio.h>
int main()
{
    int t,c,d,i;
    float ftotal,ctotal;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&c,&d);
        ftotal=(1.8*c)+32+d;
        ctotal=(ftotal-32)/1.8;
        printf("Case %d: %.2f\n",i,ctotal);
    }
    return 0;
}
