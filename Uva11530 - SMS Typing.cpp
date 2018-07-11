#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,m,n,o,cnt;
    char s[10][5]={
                    "abc",
                    "def",
                    "ghi",
                    "jkl",
                    "mno",
                    "pqrs",
                    "tuv",
                    "wxyz",
                    " "
                    };
    char s2[101];
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++)
    {
        gets(s2);
        cnt=0;
        for(m=0;m<strlen(s2);m++)
        {
            for(n=0;n<10;n++)
            {
                for(o=0;o<5;o++)
                {
                    if(s2[m]==s[n][o])
                        cnt+=o+1;
                }
            }
        }
        cout<<"Case #"<<i<<": "<<cnt<<endl;
    }
    return 0;
}
