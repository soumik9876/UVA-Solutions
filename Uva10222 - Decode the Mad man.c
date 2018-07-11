#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000];
    int i;
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='e' || s[i]=='E')
            s[i]='q';
        else if(s[i]=='d' || s[i]=='D')
            s[i]='a';
        else if(s[i]=='c' || s[i]=='C')
            s[i]='z';
        else if(s[i]=='r' || s[i]=='R')
            s[i]='w';
        else if(s[i]=='f' || s[i]=='F')
            s[i]='s';
        else if(s[i]=='v' || s[i]=='V')
            s[i]='x';
        else if(s[i]=='t' || s[i]=='T')
            s[i]='e';
        else if(s[i]=='g' || s[i]=='G')
            s[i]='d';
        else if(s[i]=='b' || s[i]=='B')
            s[i]='c';
        else if(s[i]=='y' || s[i]=='Y')
            s[i]='r';
        else if(s[i]=='h' || s[i]=='H')
            s[i]='f';
        else if(s[i]=='n' || s[i]=='N')
            s[i]='v';
        else if(s[i]=='u' || s[i]=='U')
            s[i]='t';
        else if(s[i]=='j' || s[i]=='J')
            s[i]='g';
        else if(s[i]=='m' || s[i]=='M')
            s[i]='b';
        else if(s[i]=='i' || s[i]=='I')
            s[i]='y';
        else if(s[i]=='k' || s[i]=='K')
            s[i]='h';
        else if(s[i]==',' || s[i]=='<')
            s[i]='n';
        else if(s[i]=='o' || s[i]=='O')
            s[i]='u';
        else if(s[i]=='l' || s[i]=='L')
            s[i]='j';
        else if(s[i]=='.' || s[i]=='>')
            s[i]='m';
        else if(s[i]=='p' || s[i]=='P')
            s[i]='i';
        else if(s[i]==';' || s[i]==':')
            s[i]='k';
        else if(s[i]=='/' || s[i]=='?')
            s[i]=',';
        else if(s[i]=='[' || s[i]=='{')
            s[i]='o';
        else if(s[i]=='\'' || s[i]=='"')
            s[i]='l';
        else if(s[i]==']' || s[i]=='}')
            s[i]='p';
        }
    puts(s);
    return 0;
}
