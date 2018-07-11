#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int n,press,i,root;
    while(cin>>n && n)
    {
        root=sqrt(n);
        if(n==(root*root))
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}
