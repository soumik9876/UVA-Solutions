#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,w,north,south,temp,checkyes;
    cin>>t;
    while(t--)
    {
        checkyes=1;
        cin>>w;
        cin>>north>>south;
        w--;
        temp=north-south;
        while(w--)
        {
            cin>>north>>south;
            if((north-south)!=temp)
                checkyes=0;
        }
        if(checkyes==1)
            cout<<"yes\n";
        else
            cout<<"no\n";
        if(t>0)
            cout<<"\n";
    }
    return 0;
}
