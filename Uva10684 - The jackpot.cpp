#include<iostream>
using namespace std;
int main()
{
    int n,bets,temp,gain;
    while(cin>>n)
    {
        if(n==0)
            break;
        gain=0;
        temp=0;
        while(n--)
        {
            cin>>bets;
            temp+=bets;
            if(temp>gain)
            {
                gain=temp;
            }
            if(temp<0)
                temp=0;
        }
        if(gain>0)
            cout<<"The maximum winning streak is "<<gain<<".\n";
        else
            cout<<"Losing streak.\n";
    }
    return 0;
}

