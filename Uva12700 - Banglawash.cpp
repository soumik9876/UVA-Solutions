#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,bangladesh,www,ties,i;
    char res;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        bangladesh=0;
        www=0;
        ties=0;
        cin>>n;
        while(n--)
        {
            scanf(" %c",&res);
            if(res=='B')
                bangladesh++;
            else if(res=='W')
                www++;
            else if(res=='T')
                ties++;
        }
        if(bangladesh>www)
        {
            if(www==0 && ties==0)
                printf("Case %d: BANGLAWASH\n",i);
            else
                printf("Case %d: BANGLADESH %d - %d\n",i,bangladesh,www);
        }
        else if(bangladesh<www)
        {
            if(bangladesh==0 && ties==0)
                printf("Case %d: WHITEWASH\n",i);
            else
                printf("Case %d: WWW %d - %d\n",i,www,bangladesh);
        }
        else if(bangladesh==www)
        {
            if(bangladesh==0 && www==0 && ties==0)
                printf("Case %d: ABANDONED\n",i);
            else
                printf("Case %d: DRAW %d %d\n",i,bangladesh,ties);
        }
        if(i==t)
            printf("\b");
    }
    return 0;
}
