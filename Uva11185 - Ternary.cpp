#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ter[200];
    long long tern,dec,i,temp,multi;
    while(cin>>dec)
    {
        if(dec<0)
            break;
        i=0;
        tern=0;
        multi=1;
        while(dec!=0)
        {
            temp=dec%3;
            tern=tern+(temp*multi);
            dec=dec/3;
            multi*=10;
        }
        //puts(ter);
        cout<<tern<<endl;
    }
    return 0;
}
