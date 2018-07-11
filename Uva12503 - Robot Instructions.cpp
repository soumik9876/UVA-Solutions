#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
    int t,n,pos[101],poss,i,same,j;
    char ins[12];
    cin>>t;
    while(t--)
    {
        scanf("%d ",&n);
        poss=0;
        for(i=0;i<n;i++)
        {
            same=0;
            gets(ins);
            if(strcmp(ins,"LEFT")==0)
                pos[i]=-1;
            else if(strcmp(ins,"RIGHT")==0)
                pos[i]=1;
            else
            {
                for(j=8;j<strlen(ins);j++)
                    same=(same*10)+(ins[j]-48);
                pos[i]=pos[same-1];
            }
        }
        for(i=0;i<n;i++)
            poss+=pos[i];
        cout<<poss<<endl;
    }
    return 0;
}
