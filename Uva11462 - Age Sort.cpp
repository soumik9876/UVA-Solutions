#include<bits/stdc++.h>
//#include<algorithm>
using namespace std;
//void bsort(int arr[],int n);
int main()
{
    long long int n,i,arr[200005];
    while(scanf("%lld",&n))
    {
        if(n==0)
            break;
        for(i=0;i<n;i++)
            scanf("%lld",&arr[i]);
        sort(arr,arr+n);
        for(i=0;i<n-1;i++)
            printf("%lld ",arr[i]);
        printf("%d\n",arr[n-1]);
    }
    return 0;
}
/*void bsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}*/
