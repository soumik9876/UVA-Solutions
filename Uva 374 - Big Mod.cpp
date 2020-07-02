#include<iostream>
#include<cstdio>

using namespace std;
int bigMod(long long b,long long p,int m);

int main()
{
    long long b,p;
    int m;
    while(scanf("%lli %lli %d",&b,&p,&m)!=EOF)
    {
        cout<<bigMod(b,p,m)<<endl;
    }
    return 0;
}

int bigMod(long long b,long long p,int m)
{
    if(p==0)
        return 1;
    if(p%2==1)
        return ((b%m)*(bigMod(b,p-1,m)))%m;
    else
    {
        long long temp=bigMod(b,p/2,m);
        return (temp*temp)%m;
    }
}
