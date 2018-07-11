#include<iostream>
#include<cstdio>
using namespace std;
int GCD(int i,int j);
int main()
{
    int g,i,j,n;
    while(cin>>n)
    {
        if(n==0)
            break;
        g=0;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                g+=GCD(i,j);
            }
        }
        cout<<g<<"\n";
    }
    return 0;
}
int GCD(int i,int j)
{
    int temp,maxx,m;
    maxx=0;
    if(i<=j)
    {
        for(m=1;m<=i;m++)
        {
            if(i%m==0 && j%m==0)
                temp=m;
            if(temp>maxx)
                maxx=temp;
        }
    }
    else
    {
        for(m=1;m<=j;m++)
        {
            if(i%m==0 && j%m==0)
                temp=m;
            if(temp>maxx)
                maxx=temp;
        }
    }
    return maxx;
}
