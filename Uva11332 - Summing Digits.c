#include<stdio.h>
int main()
{
    long long int n,i,sum,temp;
    while(scanf("%lld",&n)){
        if(n==0)
            break;
        while((n%10)!=n){
            sum=0;
            temp=n;
            while(temp!=0){
                sum=sum+(temp%10);
                temp=temp/10;
            }
            n=sum;
        }
        printf("%lld\n",n);
    }
    return 0;
}
