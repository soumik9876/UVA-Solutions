#include<stdio.h>
int main()
{
    int t,n,x[21],i,max,min,total;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        max=0;
        min=100;
        for(i=0;i<n;i++){
            scanf("%d",&x[i]);
            if(x[i]>max)
                max=x[i];
            if(x[i]<min)
                min=x[i];
        }
        total=2*(max-min);
        printf("%d\n",total);
    }
    return 0;
}
