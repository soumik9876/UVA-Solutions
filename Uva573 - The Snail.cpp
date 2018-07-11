#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    float h,u,d,f,h1,u1;
    int day;
    while(cin>>h>>u>>d>>f)
    {
        if(h==0)
            break;
        day=0;
        u1=u;
        h1=0;
        while(1)
        {
            h1=h1+u1;
            if(u1>=(u*f)/100.0)
                u1=u1-((u*f)/100.0);
            day++;
            if(h1>h){
                printf("success on day %d\n",day);
                break;
            }
            else
                h1=h1-d;
            if(h1<0 && day>0){
                printf("failure on day %d\n",day);
                break;
            }
        }
    }
    return 0;
}
