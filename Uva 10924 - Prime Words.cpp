#include<bits/stdc++.h>
using namespace std;
bool prime(int n);
int main()
{
    int i,total;
    char c[22];
    while(gets(c))
    {
        total=0;
        for(i=0;i<strlen(c);i++)
        {
            if(c[i]>=97 && c[i]<=122)
                total+=c[i]-96;
            else if(c[i]>=65 && c[i]<=90)
                total+=c[i]-38;
        }
        if(prime(total)==true)
            cout<<"It is a prime word."<<endl;
        else
            cout<<"It is not a prime word."<<endl;
    }
    return 0;
}
bool prime(int n)
{
    //if(n<2)
        //return false;
    if(n%2==0 && n!=2)
        return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
