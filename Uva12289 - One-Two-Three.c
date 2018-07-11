#include<stdio.h>
#include<string.h>
int main()
{
    int t,i;
    char s[11];
    scanf("%d ",&t);
    while(t--){
        gets(s);
        if (strlen(s)==5)
            printf("3\n");
        else if(strlen(s)==3){
            if((s[0]=='o' && (s[1]=='n' || s[2]=='e')) || (s[1]=='n' && (s[0]=='o' || s[2]=='e')) || (s[2]=='e' && (s[0]=='o' || s[1]=='n')))
                printf("1\n");
            else
                printf("2\n");
        }
    }
    return 0;
}
