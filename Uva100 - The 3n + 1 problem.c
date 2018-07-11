#include<stdio.h>
int main()
{
    long long int n,cnt,i,j,temp,m,t;
    while(scanf("%lld %lld",&i,&j)!=EOF){
        printf("%lld %lld ",i,j);
        if(i>j){
            t=i;
            i=j;
            j=t;
        }
        temp=0;
        for(m=i;m<=j;m++){
            n=m;
            cnt=1;
            while(1){
            if(n==1)
                break;
            else if(n%2==1){
                n=(3*n)+1;
                cnt++;
            }
            else if(n%2==0){
                n=n/2;
                cnt++;
            }
        }
        if(cnt>temp)
            temp=cnt;
    }
        printf("%lld\n",temp);
    }
    return 0;
}
