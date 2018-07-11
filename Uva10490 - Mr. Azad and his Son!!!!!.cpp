#include<bits/stdc++.h>
using namespace std;
bool prime(long long int n);
bool perfect(long long int n);
int main()
{
    long long int k,n,i;
    while(scanf("%lld",&k) && k!=0)
    {
        n=pow(2,k-1)*(pow(2,k)-1);
        if(prime(pow(2,k)-1)==true)
            cout<<"Perfect: "<<n<<"!\n";
        else if(prime(k)==true)
            cout<<"Given number is prime. But, NO perfect number is available.\n";
        else
            cout<<"Given number is NOT prime! NO perfect number is available.\n";
    }
    return 0;
}
bool prime(long long int n)
{
    if(n<2 || n%2==0)
        return false;
    for(long long int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
/*bool perfect(long long int n)
{
    long long int sum=1;
    for(long long int i=2;i*i<=n;i++)
    {
        if(n%i==0) //&& i*i!=n)
            sum+=i+(n/i);
        //else if(n%i==0 && i*i==n)
            //sum+=i;
    }
    if(sum==n && sum!=1)
        return true;
    return false;
}*/

