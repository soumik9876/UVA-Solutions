#include<stdio.h>
#include<string.h>
int main()
{
    char c[]="1234567890-=WERTYUIOP[]\\SDFGHJKL;'XCVBNM,./";
    char d[]="`1234567890-QWERTYUIOP[]ASDFGHJKL;ZXCVBNM,.";
    char in[1000];
    int i,j;
    while(gets(in))
    {
        for(i=0;i<strlen(in);i++)
        {
            for(j=0;j<strlen(c);j++)
            {
                if(in[i]==c[j])
                    in[i]=d[j];
            }
        }
        puts(in);
    }
    return 0;
}
