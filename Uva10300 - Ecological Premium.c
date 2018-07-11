#include<stdio.h>
int main()
{
    int n,f,size,animal,env,temp,total;
    scanf("%d",&n);
    while(n--){
        total=0;
        scanf("%d",&f);
        while(f--){
            temp=0;
            scanf("%d %d %d",&size,&animal,&env);
            temp=size*env;
            total+=temp;
        }
    printf("%d\n",total);
    }
    return 0;
}
