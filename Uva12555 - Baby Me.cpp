#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    double n1,n2;
    double total;
    string s="";
    scanf("%d ",&t);
    for(i=1;i<=t;i++)
    {
        cin>>n1;
        getline(cin,s);
        if(s.size()>3)
        {
            n2=s[3]-'0';
        }
        else
            n2=0;
        //cout<<s<< " " <<s.size()<<endl;
        //cout<<n1<< " "<<n2<<endl;
        total=(n1*.5)+(n2*.05);
        printf("Case %d: %g\n",i,total);
        //cout<<"Case "<<i<<": "<<total<<endl;
    }
    return 0;
}
