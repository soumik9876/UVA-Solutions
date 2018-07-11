#include<stdio.h>
int main()
{
    int n,zero=0,ara[1000],i,j;
    for(j=1;j<76;j++){
        scanf("%d",&n);
        if(n==0)
            break;
        zero=0;
        for(i=0;i<n;i++){
            scanf("%d",&ara[i]);
            if(ara[i]==0)
                zero++;
        }
        printf("Case %d: %d\n",j,n-2*zero);
    }
    return 0;
}
