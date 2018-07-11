#include<stdio.h>
int main()
{
    double length,width,depth,weight,total;
    int t,cnt=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf %lf %lf %lf",&length,&width,&depth,&weight);
        total=length+width+depth;
        if(((length>56 || width>45 || depth>25) && total>125) || weight>7)
        {
            printf("0\n");
        }
        else
        {
            printf("1\n");
            cnt++;
        }
    }
    printf("%d\n",cnt);
    return 0;
}
