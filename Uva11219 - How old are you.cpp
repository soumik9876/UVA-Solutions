#include<stdio.h>
#include<string.h>
int main()
{
    int len1,len2,d1,d2,m1,m2,y1,y2,t,i,age;
    char current[11],birth[11];
    scanf("%d ",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d/%d/%d",&d1,&m1,&y1);
        scanf("%d/%d/%d",&d2,&m2,&y2);
        //gets(current);
        //gets(birth);
        //len1=strlen(current);
        //len2=strlen(birth);
        //d1=((current[0]-48)*10)+(current[1]-48);
        //m1=((current[3]-48)*10)+(current[4]-48);
        //y1=((current[6]-48)*1000)+((current[7]-48)*100)+((current[8]-48)*10)+(current[9]-48);
        //d2=((birth[0]-48)*10)+(birth[1]-48);
        //m2=((birth[3]-48)*10)+(birth[4]-48);
        //y2=((birth[6]-48)*1000)+((birth[7]-48)*100)+((birth[8]-48)*10)+(birth[9]-48);
        age=y1-y2;
        if(m1<m2 || (m1==m2 && d1<d2))
            age--;
        if(y1<y2 || (y1==y2 && (m1<m2 || (m1==m2 && d1<d2))))
            printf("Case #%d: Invalid birth date\n",i);
        else if(age>130)
            printf("Case #%d: Check birth date\n",i);
        else
            printf("Case #%d: %d\n",i,age);
    }
    return 0;
}
