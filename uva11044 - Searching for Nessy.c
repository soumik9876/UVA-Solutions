#include<stdio.h>
int main()
{
    int n,testcase,row,column,total,t1,t2;
    scanf("%d",&testcase);
    for(n=0;n<testcase;n++){
        scanf("%d %d",&row,&column);
        t1=(row-2)/3;
        if((row-2)%3!=0)
            t1=t1+1;
        t2=(column-2)/3;
        if((column-2)%3!=0)
            t2=t2+1;
        total=t1*t2;
        printf("%d\n",total);
    }
    return 0;
}
