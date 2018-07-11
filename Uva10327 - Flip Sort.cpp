#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,i,j,ara[1000],temp,cnt;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            cin>>ara[i];
        cnt=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(ara[j]>ara[j+1])
                {
                    temp=ara[j];
                    ara[j]=ara[j+1];
                    ara[j+1]=temp;
                    cnt++;
                }
            }
        }
        cout<<"Minimum exchange operations : "<<cnt<<endl;
    }
    return 0;
}
