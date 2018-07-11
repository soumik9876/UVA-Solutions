#include<stdio.h>
int main()
{
    int t,n,k,p,i,finalplayer;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d %d",&n,&k,&p);
        finalplayer=(k+p)%n;
        if((k+p)%n==0)
            finalplayer=n;
        printf("Case %d: %d\n",i,finalplayer);
    }
    return 0;
}
