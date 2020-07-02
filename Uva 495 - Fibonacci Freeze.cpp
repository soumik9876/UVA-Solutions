#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
char bigsum(string &s1,string &s2);
void strrev(string &s);

int main()
{
    string s1,s2,s;
    cin>>s1;
    cin>>s2;
    bigsum(s1,s2);
    //strrev(s1);
    cout<<bigsum(s1,s2);
    return 0;
}

char bigsum(string &s1,string &s2)
{
    int i,firstdigit,lastdigit,carry=0,add,cnt=0;
    string sum;
    strrev(s1);
    strrev(s2);
    for(i=0;i<s1.length();i++)
    {
        firstdigit=s1[i]-48;
        lastdigit=(i<s2.length())?s2[i]-48:0;
        add=firstdigit+lastdigit+carry;
        carry=0;
        if(add>9)
        {
            carry=1;
            add-=10;
        }
        sum[cnt++]=add+48;
    }
    if(carry==1)
        sum[cnt++]='1';
    strrev(sum);
    return sum[1];
}

void strrev(string &s)
{
    for(int i=0;i<(s.length()/2);i++)
    {
        swap(s[i],s[s.length()-i-1]);
    }
}
