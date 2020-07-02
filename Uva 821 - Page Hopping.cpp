#include<bits/stdc++.h>
#define ll                    long long int
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define MOD                   1000000007
#define vi                    vector<int>
#define vll                   vector<ll>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
#define eb                    emplace_back
#define ull                   unsigned long long
#define KAMEHAMEHA            ios_base::sync_with_stdio(0);
#define RASENGAN              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define INF                   1e6
using namespace std;

int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
    int c=1,u,v,matrix[110][110];

    while(1)
    {
        for(int i=1;i<=100;i++)
        {
            for(int j=1;j<=100;j++)
                matrix[i][j]=INF;
        }
        int mx=0;
        cin>>u>>v;
        matrix[u][v]=1,mx=max({mx,u,v});
        if(u==0 && v==0) break;
        while(cin>>u>>v && (u || v))
            matrix[u][v]=1,mx=max({mx,u,v});
        for(int k=1;k<=mx;k++)
        {
            for(int i=1;i<=mx;i++)
            {
                for(int j=1;j<=mx;j++)
                {
                    if( matrix[i][k]+matrix[k][j]<matrix[i][j])
                        matrix[i][j]=matrix[i][k]+matrix[k][j];
                }
            }
        }
        double sum=0,cnt=0;
        for(int i=1;i<=mx;i++)
        {
            for(int j=1;j<=mx;j++)
            {
                if(i==j) continue;
               // cout<<matrix[i][j]<< " ";
                if(matrix[i][j]<INF)
                {
                    //cout<<sum<< " "<<endl;
                    sum+=matrix[i][j],cnt++;
                }
            }
            //cout<<endl;
        }
        //cout<<sum<< " "<<cnt<< " "<<mx<<endl;
        cout<<fixed<<setprecision(3)<<"Case "<<c++<<": average length between pages = "<<sum/cnt<<" clicks"<<endl;
    }
    return 0;
}


