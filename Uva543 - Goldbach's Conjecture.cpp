#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
bool prime(int n);
int main()
{
    int n,a,b,i;
    while(cin>>n)
    {
        if(n==0)
            break;
        for(i=2;i<n;i++)
        {
            if(prime(i)==true)
            {
                a=n-i;
                if(prime(a)==true)
                    break;
            }
        }
        if(i==n-1)
            cout<<"Goldbach's conjecture is wrong.\n";
        else
            cout<<n<<" = "<<i<<" + "<<a<<endl;
    }
    return 0;
}
bool prime(int n)
{
    int i,j;
    bool checkprime=true;
    if(n==2 || n==3)
        checkprime=true;
    else
    {
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
                checkprime=false;
        }
    }
    return checkprime;
}
