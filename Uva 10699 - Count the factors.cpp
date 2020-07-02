#include<bits/stdc++.h>
using namespace std;
#define N 1000009
bool isprime[1000010];
int factors[1000010];
void sieveFactor();
int main()
{
    int a;
    sieveFactor();
    while(cin>>a && a)
    {
        cout<<a<<" : "<<factors[a]<<endl;
    }

    return 0;

}
void sieveFactor()
{

    for(int i=2;i<=N;i++)
    {
        if(!isprime[i])
        {
            factors[i]=1;
            for(int j=i*2;j<=N;j+=i)
            {
                factors[j]++;
                isprime[j]=true;
            }
        }
    }
}
