#include<stdio.h>
#include<string.h>
int main()
{
    char in[6];
    int i=1,t;
    while(i++){
        gets(in);
        if (in[0]=='*')
            break;
        else if(strlen(in)==4)
            printf("Case %d: Hajj-e-Akbar\n",i-1);
        else if(strlen(in)==5)
            printf("Case %d: Hajj-e-Asghar\n",i-1);
    }
    return 0;
}
