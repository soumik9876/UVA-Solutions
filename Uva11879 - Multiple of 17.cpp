#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
    int n,i,fdigit,sdigit,temp,cnt;
    char num[1001],num1[1001];
    while(gets(num))
    {
        if(strcmp(num,"0")==0)
            break;
        cnt=0;
        memset(num1,0,1000);
        for(i=0;i<strlen(num);i++)
        {
            if(num[i]>=48 && num[i]<=57)
            {
                num1[cnt++]=num[i];
            }
        }
        fdigit=num1[0]-48;
        for(i=1;i<strlen(num1);i++)
        {
            sdigit=num1[i]-48;
            temp=(fdigit*10)+sdigit;
            fdigit=temp%17;
        }
        if(fdigit!=0)
        cout<<"0"<<endl;
        else
        cout<<"1"<<endl;
    }
    return 0;
}
