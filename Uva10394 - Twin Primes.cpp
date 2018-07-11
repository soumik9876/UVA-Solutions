#include<bits/stdc++.h>
#define M 20000005
using namespace std;
bool marked[M];
void sieve(int n);
int main()
{
    int n,s,cnt=1,i,twinprime[100007];
    sieve(M);
    for(i=3;cnt<=100000;i+=2)
    {
        if(marked[i]==false && marked[i+2]==false)
            twinprime[cnt++]=i;
            //twinprime[cnt++]=i+2;
    }
    while(scanf("%d",&s)!=EOF)
    {
        /*cnt=0;
        for(i=3;cnt<s;i+=2)
        {
            if(marked[i]==false && marked[i+2]==false)
                cnt++;
        }*/
        cout<<"("<<twinprime[s]<<", "<<twinprime[s]+2<<")"<<endl;
    }
    return 0;
}
void sieve(int n)
{
    int i;
    for(i=3;i*i<=n;i+=2)
    {
        if(marked[i]==false)
        {
            for(int j=i*i;j<=n;j+=i+i)
            {
                marked[j]=true;
            }
        }
    }
}
