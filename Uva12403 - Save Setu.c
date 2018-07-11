#include<stdio.h>
#include<string.h>
int main()
{
    int t,tk,total,i;
    char c[15];
    scanf("%d ",&t);
    total=0;
    while(t--)
    {
        tk=0;
        scanf("%s",c);
        if(strcmp(c,"donate")==0)
        {
            scanf("%d ",&tk);
        }
        total=total+tk;
        if(strcmp(c,"report")==0)
            printf("%d\n",total);
    }
    return 0;
}
