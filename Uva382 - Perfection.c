#include<stdio.h>
int main()
{
    int in[101],n,i=0,cnt=0,sum,div,j;
    while(scanf("%d",&in[i])){
        if(in[i]==0)
            break;
        i++;
        cnt++;
    }
    printf("PERFECTION OUTPUT\n");
    for(i=0;i<cnt;i++){
        sum=0;
        for(j=1;j<=in[i]/2;j++){
            if(in[i]%j==0)
                sum+=j;
        }
        if(sum==in[i])
            printf("%5d  PERFECT\n",in[i]);
        else if(sum>in[i])
            printf("%5d  ABUNDANT\n",in[i]);
        else
            printf("%5d  DEFICIENT\n",in[i]);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
