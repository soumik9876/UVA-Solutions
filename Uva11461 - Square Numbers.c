#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,cnt,i,s;
    while(scanf("%d %d",&a,&b))
    {
        cnt=0;
        if(a==0 && b==0)
            break;
        for(i=a;i<=b;i++)
        {
            s=floor(sqrt(i));
            if(sqrt(i)/s==1)
            cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
