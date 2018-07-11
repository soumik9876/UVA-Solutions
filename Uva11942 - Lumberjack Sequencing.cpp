#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,beard[10],i,ascend,j=0;
    cin>>n;
    while(n--)
    {
        j++;
        int order=1;
        ascend=0;
        cin>>beard[0]>>beard[1];
        if(beard[0]<beard[1])
        {
            ascend=1;
        }
        for(i=2;i<10;i++)
        {
            cin>>beard[i];
            if(ascend==1)
            {
                if(beard[i]<beard[i-1])
                    order=0;
            }
            else if(ascend==0)
            {
                if(beard[i]>beard[i-1])
                    order=0;
            }
        }
        if(j==1)
            cout<<"Lumberjacks:\n";
        if(order==0)
            cout<<"Unordered\n";
        else
            cout<<"Ordered\n";
    }
    return 0;
}
