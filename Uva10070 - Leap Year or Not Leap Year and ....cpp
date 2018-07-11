#include<stdio.h>
#include<string.h>
int divider(char num[],int n);
int main()
{
    char year[1001];
    long long int checkleap,checkhuluculu,checkbulukulu,blank=1;
    while(gets(year))
    {
        checkleap=0;
        checkhuluculu=0;
        checkbulukulu=0;
        if(divider(year,4)==1)
            checkleap=1;
        if(divider(year,100)==1 && divider(year,400)==0)
            checkleap=0;
        if(divider(year,15)==1)
            checkhuluculu=1;
        if(divider(year,55)==1 && checkleap==1)
            checkbulukulu=1;
        if(!blank)
            printf("\n");
        blank=0;
        if(checkleap==1)
            printf("This is leap year.\n");
        if(checkhuluculu==1)
            printf("This is huluculu festival year.\n");
        if(checkbulukulu==1)
            printf("This is bulukulu festival year.\n");
        if(checkleap==0 && checkhuluculu==0 && checkbulukulu==0)
            printf("This is an ordinary year.\n");
    }
    return 0;
}
int divider(char num[],int n)
{
    int i,temp,checkdiv;
    temp=num[0]-48;
    for(i=1;i<strlen(num);i++)
    {
        temp=((temp%n)*10)+(num[i]-48);
    }
    if(temp%n==0)
        checkdiv=1;
    else
        checkdiv=0;
    return checkdiv;
}
