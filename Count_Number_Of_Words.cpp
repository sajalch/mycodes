/*
Program to Count the number of words within a string

I/P: Welcome To CIT Kokrajhar
O/P: 4

     BY ********SAJAL CHAKRABORTY (Undergrade at CIT Kokrajhar)********
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int c,i=0;
    getline(cin,s);
    if(s[0]==' ')
        c=0;
    else
        c=1;
    while(s[i]!='\0')
    {
        if(s[i]==' '&&s[i+1]!=' '&&s[i+1]!='\0')
            c=c+1;
        i++;
    }
    cout<<c;
return 0;
}
