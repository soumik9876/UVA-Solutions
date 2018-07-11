#include<bits/stdc++.h>
using namespace std;
void strcp(char ch1[],char ch2[])
{
    int i,cnt=0;
    for(i=0;i<strlen(ch1);i++)
    {
        if((ch1[i]>='A' && ch1[i]<='Z')||(ch1[i]>='a' && ch1[i]<='z'))
        {
            ch2[cnt]=tolower(ch1[i]);
            cnt++;
        }
    }
}
void strrv(char ch[])
{
    int len=strlen(ch),i;
    char temp;
    for(i=0;i<len/2;i++)
    {
        temp=ch[i];
        ch[i]=ch[len-i-1];
        ch[len-i-1]=temp;
    }
}
int main()
{
    int i,cnt;
    char s1[1000];
    char s2[1000]="  ";
    char s3[1000]="  ";
    while(gets(s1))
    {
        if(strcmp(s1,"DONE")==0)
            break;
        memset(s2,0,strlen(s2));
        memset(s3,0,strlen(s3));
        strcp(s1,s2);
        strcpy(s3,s2);
        strrv(s3);
        if(strcmp(s2,s3)==0)
            cout<<"You won't be eaten!\n";
        else
            cout<<"Uh oh..\n";
    }
    return 0;
}
