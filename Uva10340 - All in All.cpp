#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100000],t[100000],u[100000];
    int i,j,cnt=0,temp=0;
    while(scanf("%s %s",s,t)!=EOF)
    {
        memset(u,0,100000);
        cnt=0;
        temp=0;
        for(i=0;i<strlen(s);i++)
        {
            for(j=temp;j<strlen(t);j++)
            {
                if(s[i]==t[j])
                {
                    u[cnt++]=s[i];
                    temp=j+1;
                    break;
                }
            }
        }
        if(strcmp(s,u)==0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
