#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;
int main()
{
    int i,n,temp,cnt,bin;
    char binn[50],binn1[50];
    while(cin>>n && n)
    {
            bin=0;
            cnt=0;
            i=1;
        while(n!=0)
        {
            if(n%2==1){
            binn[bin]='1';
            cnt++;
            }
            else
                binn[bin]='0';
            n=n/2;
            bin++;
        }
        printf("The parity of ");
        while(bin--)
            printf("%c",binn[bin]);
        printf(" is %d (mod 2).\n",cnt);
    }
    return 0;
}
