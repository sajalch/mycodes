/*
Bubble Sort Technique Implementation In CPP

 BY ********SAJAL CHAKRABORTY (Undergrade at CIT Kokrajhar)********
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
     for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
