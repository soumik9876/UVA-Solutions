#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b,c;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        c=a^b;
        cout<<c<<endl;
    }
    return 0;
}
