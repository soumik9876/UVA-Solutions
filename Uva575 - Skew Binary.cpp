#include<bits/stdc++.h>
using namespace std;
int main()
{
    char bin[200];
    int dec,i,len;
    while(gets(bin))
    {
        if(strcmp(bin,"0")==0)
            break;
        len=strlen(bin);
        dec=0;
        for(i=0;i<strlen(bin);i++)
        {
            dec=dec+(bin[i]-48)*(pow(2,(len-i))-1);
        }
        cout<<dec<<endl;
    }
    return 0;
}
