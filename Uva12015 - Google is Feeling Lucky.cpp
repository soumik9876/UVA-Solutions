#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,t,cnt,relevance[10],maxx,k[11];
    char web[11][101];
    scanf("%d",&t);
    while(t--)
    {
        j++;
        maxx=0;
        cnt=0;
        for(i=0;i<=9;i++){
        scanf("%s %d",web[i],&relevance[i]);
        if(relevance[i]>maxx){
            maxx=relevance[i];
            k[0]=i;
            cnt=1;
        }
        else if(relevance[i]==maxx){
            k[cnt]=i;
            cnt++;
        }
        }
        printf("Case #%d:\n",j);
        for(i=0;i<cnt;i++)
            puts(web[k[i]]);
    }
    return 0;
}
