#include<stdio.h>
int main()

{
    long long int n,b,h,w,p,a,i,j,temp,total,check_hotel,checkhome;
    while(scanf("%lld %lld %lld %lld",&n,&b,&h,&w)!=EOF){
        total=b;
        checkhome=h;
        for(j=0;j<h;j++){
            temp=0;
            check_hotel=1;
            scanf("%lld",&p);
            for(i=0;i<w;i++){
                scanf("%lld",&a);
                if(a>=n){
                check_hotel=0;
                }
            }
            if(check_hotel==1)
            {
                checkhome--;
                continue;
            }
            if(check_hotel==0)
                temp=p*n;
            if(check_hotel==0)
            {
                if(temp<=total)
                total=temp;
                if(temp>total)
                    checkhome--;
            }
        }
        if(checkhome==0)
            printf("stay home\n");
        else
            printf("%lld\n",total);
    }
    return 0;
}
