#include<iostream>
#include<cstdio>
using namespace std;
void bsort(int arr[],int pos[],int n);
int binsearch(int arr[],int n,int a);
int main()
{
    int n,m,cnt,pos,k,v,arr[100001],i,poss[100000];
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        for(i=0;i<n;i++)
            cin>>arr[i];
        bsort(arr,poss,n);
        while(m--)
        {
            cnt=0;
            cin>>k>>v;
            if((binsearch(arr,n,v)+k-1)<n)
                pos=poss[binsearch(arr,n,v)+k-1]+1;
            /*for(i=1;i<=nx c;i++)
            {
                if(v==arr[i])
                    cnt++;
                if(cnt==k)
                {
                    pos=i;
                    break;
                }
            }*/
            if(arr[binsearch(arr,n,v)+k-1]==v)
                cout<<pos<<"\n";
            //else if((binsearch(arr,n,v)+k-1)>=0)
                //cout<<"0\n";
            else
                cout<<"0\n";
        }
    }
    return 0;
}
void bsort(int arr[],int pos[],int n)
{
    for(int i=0;i<n;i++)
        pos[i]=i;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swap(pos[j],pos[j+1]);
            }
        }
    }
}
int binsearch(int arr[],int n,int a)
{
    int start=0,endd=n-1,mid;
    while(1)
    {
        mid=(start+endd)/2;
        if(arr[mid]==a)
        {
            while(arr[mid-1]==a)
            {
                mid--;
            }
            return mid;
        }
        else if(arr[mid]<a)
        {
            start=mid+1;
        }
        else
            endd=mid-1;
    }
}
