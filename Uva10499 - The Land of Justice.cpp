#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,profit;
    while(cin>>n)
    {
        if(n<0)
            break;
        profit=0;
        if(n>1)
            profit=n*25;
        cout<<profit<<"%"<<endl;
    }
    return 0;
}
