#include<stdio.h>
#include<math.h>
#define pi 2.0*acos(0.0)
int main()
{
    double p,s;
    while(scanf("%lf",&p)!=EOF)
    {
        s=p*(sin(108.0*(pi/180.0))/sin(63.0*(pi/180.0)));
        printf("%.10lf\n",s);
    }
    return 0;
}
