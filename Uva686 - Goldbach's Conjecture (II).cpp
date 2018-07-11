#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
bool prime(int n);
int main()
{
    int n,a,cnt,i;
    while(cin>>n)
    {
        cnt=0;
        if(n==0)
            break;
        for(i=2;i<=n/2;i++)
        {
            if(prime(i)==true)
            {
                a=n-i;
                if(prime(a)==true)
                    cnt++;
            }
        }
            cout<<cnt<<endl;;
    }
    return 0;
}
bool prime(int n)
{
    int i,j;
    bool checkprime=true;
    if(n==1)
        checkprime=false;
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
