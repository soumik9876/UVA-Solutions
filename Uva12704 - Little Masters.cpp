#include<bits/stdc++.h>
using namespace std;
int main()
{
    double t,x,y,r,minn,maxx;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>r;
        minn=r-sqrt((x*x)+(y*y));
        maxx=r+sqrt((x*x)+(y*y));
        printf("%.2lf %.2lf\n",minn,maxx);
    }
    return 0;
}
