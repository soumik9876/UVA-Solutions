#include<bits/stdc++.h>
#define time clock_t tStart = clock();
#define show printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll                    long long int
#define loop(a,b)             for(int i=a;i<=b;++i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
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
using namespace std;
int representative(vi &parent,int node)
{
    return (parent[node]==node)?node:parent[node]=representative(parent,parent[node]);
}
int main()
{
    KAMEHAMEHA
    #ifdef _soumik
        freopen("input.txt", "r", stdin);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
        int f;
        cin>>f;
        int track=1;
        map<string,int> nodes;
        vi parent(f+10);
        vi child(f+10);
        while(f--)
        {
            string a,b;
            int n1,n2;
            cin>>a>>b;

            if(nodes.find(a)==nodes.end())
            {
                nodes[a]=track++;
                n1=nodes[a];

                parent[n1]=n1;

                child[n1]=1;
                //cout<<"Here"<<endl;
            }
            else
                n1=nodes[a];
            if(nodes.find(b)==nodes.end())
            {
                nodes[b]=track++;
                n2=nodes[b];
                parent[n2]=n2;
                child[n2]=1;
            }
            else
                n2=nodes[b];
            //cout<<n1<< " "<<n2<<" "<<parent[n1]<< " "<<parent[n2]<<endl;
            int r1=representative(parent,n1),r2=representative(parent,n2);
            if(r1!=r2)
            {
                parent[r2]=r1;
                child[r1]+=child[r2];
                child[r2]=0;
            }
            cout<<child[r1]<<endl;
        }
    }
    return 0;
}

