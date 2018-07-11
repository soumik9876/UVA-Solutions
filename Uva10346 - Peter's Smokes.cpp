#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,k,total,temp,butts;
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        total=0;
        temp=0;
        butts=n;
        while(butts>=k)
        {
            total+=n;
            butts=n+temp;
            if(butts>k)
                temp=butts%k;
            else
                temp=0;
            n=butts/k;
        }
        cout<<total<<endl;
    }
    return 0;
}
