
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
#define cerr if(1)cerr
using namespace std;

void ara_print(vector<int > &v){

    for(int x : v)
        cerr << to_string(x) + " ";
    cerr << endl;
}

int query_tree(vector<pii>&tree,int st, int sp , int l , int r , int node){
    if(st > r || sp < l)
        return 0;
    if(st>=l && sp<=r){
            cerr<<"here=";
           // cerr << st <<" " << sp <<" " <<st-l<<" "<<tree[node]<< endl;
           cerr<<st<< " "<<sp<< " "<<tree[node].S<< " "<<tree[node].F<<" "<<min(tree[node].S-l,tree[node].F)<<endl;
        return min(tree[node].S-l,tree[node].F);
    }
    int mid = st + (sp-st)/2;
    int lft = 2 * node;
    int rght = 2 * node + 1;

    int ans =  max(query_tree(tree,st,mid,l,r,lft),query_tree(tree,mid+1,sp,l,r,rght));
    cerr << ans << endl;
    return ans;
}

void build_segment_tree(vector <pii > &tree, int l , int r , vector<int > &v,int node){

    if(l==r){
        tree[node] = mp(v[l],l);
        return ;
    }
    int lft = 2*node;
    int rght = 2*node + 1;
    int mid = l + (r-l)/2;

    build_segment_tree(tree,l,mid,v,lft);
    build_segment_tree(tree,mid+1,r,v,rght);
    tree[node] = max(tree[lft],tree[rght]);

}

void solve(int n, int q){

    vector <int > v(n);
    for(int &x : v)
        scanf("%d",&x);
    vector <int > prefix ;
    prefix.eb(1);
    for(int i = 1,k=1; i < n ; i++){
        if(v[i]==v[i-1])
            k++;
        else
            k=1;

        prefix.eb(k);

    }
    ara_print(prefix);
    vector < pii > tree(n*3);
    build_segment_tree(tree,0,n-1,prefix,1);
//    ara_print(tree);
    while(q--){
    int l , r ;
    scanf("%d%d",&l,&r);
    cerr <<"ans: ";
    printf("%d\n",(int)query_tree(tree,0,n-1,l-1,r-1,1));

    }

}


int main()
{
    int n;
    while(scanf("%d",&n)==1 && n){
        int b;
        scanf("%d",&b);
        solve(n,b);
    }


    return 0;
}

