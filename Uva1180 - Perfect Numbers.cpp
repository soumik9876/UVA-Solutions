#include<bits/stdc++.h>
using namespace std;
bool prime(int n);
int main()
{
    int p,main,n,ara[1000],i,total;
    char c;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%c",&p,&c);
        //main=pow(2,p-1)*(pow(2,p)-1);
        if(prime(pow(2,p)-1)==true)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
bool prime(int n)
{
    if(n<2 || n%2==0)
        return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
