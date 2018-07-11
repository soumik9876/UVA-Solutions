#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int b,n,debtor,creditor,val,money[21],checkbail,i;
    while(cin>>b>>n)
    {
        if(b==0 && n==0)
            break;
        checkbail=1;
        for(i=1;i<=b;i++)
            cin>>money[i];
        while(n--)
        {
            cin>>debtor>>creditor>>val;
            money[debtor]-=val;
            money[creditor]+=val;
        }
        for(i=1;i<=b;i++)
        {
            if(money[i]<0)
                checkbail=0;
        }
        if(checkbail==1)
            cout<<"S\n";
        else
            cout<<"N\n";
    }
    return 0;
}
