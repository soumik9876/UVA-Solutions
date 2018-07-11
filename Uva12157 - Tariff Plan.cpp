#include<iostream>
using namespace std;
int main()
{
    int t,n,time,temp,i,mile,juice;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        temp=0;
        mile=0;
        juice=0;
        while(n--)
        {
            cin>>time;
            mile+=((time/30)+1)*10;
            juice+=((time/60)+1)*15;
        }
        if(mile<juice)
            cout<<"Case "<<i<<": Mile "<<mile<<endl;
        else if(juice<mile)
            cout<<"Case "<<i<<": Juice "<<juice<<endl;
        else
            cout<<"Case "<<i<<": Mile Juice "<<mile<<endl;
    }
    return 0;
}
