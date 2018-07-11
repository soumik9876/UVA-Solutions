#include<bits/stdc++.h>
using namespace std;
int main()
/*int nines(char num[])
{
    int i,sum=0,cnt;
    for(i=0;i<strlen(num);i++)
        sum+=(num[i]-48);

}*/
{
    int i,sum,cnt,temp;
    char num[1001];
    while(gets(num))
    {
        if(strcmp(num,"0")==0)
            break;
        sum=0;
        cnt=0;
        for(i=0;i<strlen(num);i++)
            sum+=(num[i]-48);
        while(sum%9==0)
        {
            temp=0;
            cnt++;
            if(sum==9)
            {
                break;
            }
            while(sum!=0)
            {
                temp+=(sum%10);
                sum/=10;
            }
            sum=temp;
        }
        cout<<num;
        if(cnt>0)
            cout<<" is a multiple of 9 and has 9-degree "<<cnt<<".\n";
        else
            cout<<" is not a multiple of 9.\n";
    }
    return 0;
}
