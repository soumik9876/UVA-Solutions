#include<stdio.h>
int main()
{
    long long int m,n;
    int t1,t2,cnt,sum,carry;
    while(scanf("%llu %llu",&m,&n))
    {
        if(m==0 && n==0)
            break;
        cnt=0;
        sum=0;
        carry=0;
        while(m!=0 || n!=0)
        {
            t1=m%10;
            t2=n%10;
            m=m/10;
            n=n/10;
            sum=t1+t2+carry;
            if(sum>=10){
                cnt++;
                carry=1;
            }
            else
                carry=0;
        }
        if(cnt==0)
            printf("No carry operation.\n");
        else if(cnt==1)
            printf("1 carry operation.\n");
        else if(cnt>1)
            printf("%d carry operations.\n",cnt);
    }
    return 0;
}
