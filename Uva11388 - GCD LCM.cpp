#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b);
int main()
{
    int t,g,l,i,multiple,j,a,b;
    cin>>t;
    while(t--)
    {
        cin>>g>>l;
        /*multiple=g*l;
        a=0;
        b=0;
        for(i=g;i*i<=multiple;i++)
        {
            j=multiple/i;
            if(gcd(i,j)==g)
            {
                a=i;
                b=j;
                break;
            }
        }*/
        if(l%g==0)
            cout<<g<<" "<<l<<endl;
        else
            cout<<"-1\n";
    }
    return 0;
}
/*int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    return gcd(b,a%b);
}
*/
