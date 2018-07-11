#include<stdio.h>
int main()
{
    long long int row,column,cut;
    while(scanf("%lld %lld",&row,&column)!=EOF)
    {
        cut=(row*column)-1;
        printf("%lld\n",cut);
    }
    return 0;
}
