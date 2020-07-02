#include<iostream>
using namespace std;
int gcd(long long unsigned a,long long unsigned b);

int main()
{
    long long unsigned m,n;
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>m>>n;
        cout<<"Case "<<i<<": "<<(m+n)/gcd(m,n)<<endl;
    }
    return 0;
}

int gcd(long long unsigned a,long long unsigned b)
{
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}
