#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if(n<2)
        return false;
    else if(n%2==0)
        return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int t,n,i,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=(n/2)+1;;i++)
        {
            if(prime(i)==true)
            {
                x=i;
                break;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}

