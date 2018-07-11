#include<bits/stdc++.h>
using namespace std;
bool prime(int n);
int main()
{
    int n,i,cnt;
    while(cin>>n && n)
    {
        cnt=0;
        if(prime(n)==true)
            cnt++;
        for(i=2;i<sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(prime(i)==true)
                    cnt++;
                if(prime(n/i)==true)
                    cnt++;
            }
        }
        if(sqrt(n)*sqrt(n)==n && prime(sqrt(n))==true)
            cnt++;
        cout<<n<<" : "<<cnt<<endl;
    }
    return 0;
}
bool prime(int n)
{
    bool checkprime=true;
    int i;
    if(n==1)
        checkprime=false;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            checkprime=false;
            break;
        }
    }
    return checkprime;
}
