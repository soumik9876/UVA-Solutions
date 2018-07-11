#include<bits/stdc++.h>
using namespace std;
void rev(char ch[])
{
    int i;
    for(i=0;i<strlen(ch)/2;i++)
        swap(ch[i],ch[strlen(ch)-i-1]);
}
int main()
{
    char num1[1010],num2[1010],sum[1010];
    int i,carry=0,add,len;
    //memset(num1,0,100);
    //memset(num2,0,100);
    gets(num1);
    rev(num1);
    while(gets(num2))
    {
        if(strcmp(num1,"0")==0 || strcmp(num2,"0")==0)
            break;
        //rev(num1);
        rev(num2);
        carry=0;
        //puts(num1);
        //puts(num2);
        memset(sum,0,200);
        len=strlen(num1);
        if(strlen(num2)>len)
            len=strlen(num2);
        for(i=0;i<len;i++)
        {
            add=carry;
            if(num1[i]>=48 && num1[i]<=57)
                add+=(num1[i]-48);
            if(num2[i]>=48 && num2[i]<=57)
                add+=(num2[i]-48);
            carry=0;
            if(add>9)
            {
                carry=1;
                add-=10;
            }
            sum[i]=add+48;
            if(i==len-1 && carry==1)
                sum[i+1]=49;
        }
        strcpy(num1,sum);
        //rev(sum);
        //puts(num1);
    }
    rev(num1);
    puts(num1);
    return 0;
}
