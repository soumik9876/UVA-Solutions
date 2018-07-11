#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    double a,b,c,sc,bc,triangle,s;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        s=(a+b+c)/2;
        bc=pi*(pow(((a*b*c)/(sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c)))),2));
        triangle=sqrt(s*(s-a)*(s-b)*(s-c));
        sc=pi*((2*triangle)/(a+b+c))*((2*triangle)/(a+b+c));
        bc-=triangle;
        triangle-=sc;
        printf("%.4lf %.4lf %.4lf\n",bc,triangle,sc);
    }
    return 0;
}
