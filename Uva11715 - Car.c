#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    double a,b,c,d,m,n;
    for(i=1;;i++)
    {
        scanf("%lf",&a);
        if(a==0)
            break;
        scanf("%lf %lf %lf",&b,&c,&d);
        if(a==1)
        {
            n=(c-b)/d;
            m=(b*d)+(.5*n*d*d);
        }
        else if(a==2)
        {
            m=((c*c)-(b*b))/(2*d);
            n=(c-b)/d;
        }
        else if(a==3)
        {
            m=sqrt(b*b+2*c*d);
            n=(m-b)/c;
        }
        else if(a==4)
        {
            m=sqrt(b*b-2*c*d);
            n=(b-m)/c;
        }
        printf("Case %d: %.3lf %.3lf\n",i,m,n);
    }
    return 0;
}
