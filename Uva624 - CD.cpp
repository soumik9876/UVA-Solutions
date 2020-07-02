#include<bits/stdc++.h>
using namespace std;
int main()
{
    int time,num,tracks[10000],i,j,dur;
    while(scanf("%d",&time)!=EOF)
    {
        cin>>num;
        dur=0;
        for(i=0;i<num;i++)
            cin>>tracks[i];
        for(i=0;i<num;i++)
        {
            for(j=0;j<num-1;j++)
            {
                if(tracks[j]<tracks[j+1])
                    swap(tracks[j],tracks[j+1]);
            }
        }
        for(i=0;i<num;i++)
        {
            if((dur+tracks[i])<=time)
            {
                cout<<tracks[i]<<" ";
                dur+=tracks[i];
            }
        }
        cout<<"sum:"<<dur<<endl;
    }
    return 0;
}
