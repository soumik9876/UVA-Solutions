#include<stdio.h>
#include<string.h>
int main()
{
    char n1[26],n2[26];
    int i,t1,t2,sum1,sum2;
    double total1,total2,love;
    while(gets(n1) && gets(n2))
    {
        total1=0;
        total2=0;
        for(i=0;i<strlen(n1);i++)
        {
            if(n1[i]>='A' && n1[i]<='Z')
                total1+=(n1[i]-64);
            else if(n1[i]>='a' && n1[i]<='z')
                total1+=(n1[i]-96);
        }
        for(i=0;i<strlen(n2);i++)
        {
            if(n2[i]>='A' && n2[i]<='Z')
                total2+=(n2[i]-64);
            else if(n2[i]>='a' && n2[i]<='z')
                total2+=(n2[i]-96);
        }
        while(total1>9)
        {
            t1=total1;
            total1=0;
            while(t1!=0)
            {
                total1+=(t1%10);
                t1=t1/10;
            }
        }
        while(total2>9)
        {
            t2=total2;
            total2=0;
            while(t2!=0)
            {
                total2+=(t2%10);
                t2=t2/10;
            }
        }
        love=(total1*100)/total2;
        if(total1>total2)
            love=(total2*100)/total1;
        printf("%.2lf %%\n",love);
    }
    return 0;
}
