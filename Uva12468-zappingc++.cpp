#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b,diff;
    while(cin>>a>>b)
    {
        if(a==-1 && b==-1)
            break;
        diff=b-a;
        if(b<a)
        {
            if(diff<-50)
                diff=100+diff;
            else
                diff=-diff;
        }
        if(diff>50)
            diff=100-diff;
        cout<<diff<<"\n";
    }
    return 0;
}
