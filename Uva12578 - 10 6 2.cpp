#include<iostream>
#include<math.h>
#include<cstdio>
#define pi acos(-1)
using namespace std;
int main()
{
    int t;
    double l,total,red;
    cin>>t;
    while(t--)
    {
        cin>>l;
        total=l*.6*l;
        red=pi*pow((.2*l),2);
        printf("%.2lf %.2lf\n",red,total-red);
    }
    return 0;
}
