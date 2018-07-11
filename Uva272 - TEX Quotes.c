#include<stdio.h>
int main()
{
    int i,j,testsign=0;
    char ch;
    while(scanf("%c",&ch)!=EOF){
        if(ch=='"' && testsign==0){
            printf("``");
            testsign=1;
        }
        else if(ch=='"' && testsign==1){
            printf("''");
            testsign=0;
        }
        else
            printf("%c",ch);
        }
    return 0;
}
