#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,max,cnt,pos,temp,temp1;
    char c[10000],ch;
    cnt=0;
    max=0;
    pos=0;
    for(i=0;;i++)
    {
        scanf("%c",&ch);
        c[i]=ch;
        if(c[i]=='D' && c[i-1]=='-' && c[i-2]=='N' && c[i-3]=='-' && c[i-4]=='E')
        {
            if(pos==(i-1)){
            max=temp;
            pos=temp1;
            }
            break;
        }
        if((c[i]>='A' && c[i]<='Z') || (c[i]>='a' && c[i]<='z') || c[i]=='-')
            cnt++;
        else
            cnt=0;
        if(cnt>max){
            temp=max;
            max=cnt;
            temp1=pos;
            pos=i;
        }
    }
    for(i=(pos-max+1);i<=pos;i++)
    {
        c[i]=tolower(c[i]);
        printf("%c",c[i]);
    }
    printf("\n");
    return 0;
}
