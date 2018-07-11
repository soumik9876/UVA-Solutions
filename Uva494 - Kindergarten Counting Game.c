#include<stdio.h>
#include<string.h>
int main()
{
    char c[1000];
    int i,cnt;
    while(gets(c))
    {
        cnt=0;
        for(i=0;i<strlen(c);i++)
        {
            if(((c[i]>='a' && c[i]<='z') || (c[i]>='A' && c[i]<='Z'))&&((c[i+1]<'A'|| c[i+1]>'z') || (c[i+1]<'a' && c[i+1]>'Z')))
                cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
