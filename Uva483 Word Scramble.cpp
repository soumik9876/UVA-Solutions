#include<bits/stdc++.h>
using namespace std;
void strrev(char s[],int start,int endd);
int main()
{
    int i,cnt,len;
    char s[1000];
    while(gets(s))
    {
        cnt=0;
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]==' ')
            {
                strrev(s,i-cnt,i-1);
                cnt=0;
            }
            else if(i==strlen(s)-1)
                strrev(s,i-cnt,i);
            else
                cnt++;
        }
        puts(s);
    }
    return 0;
}
void strrev(char s[],int start,int endd)
{
    for(int i=start;i<=(start+endd)/2;i++)
    {
        swap(s[i],s[start+endd-i]);
    }
}
