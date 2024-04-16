#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
            int n;
    cin>>n;
    int s;
    cin>>s;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int val=0,val1=0;
    int flag=0;

    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
         val=a[i]+a[j];
            for(int k=j+1;k<n;k++)
            {
             val1=a[k]+val;
             if(val1 == s)
                {
                    flag=1;
                }
            }
        }
    }
    if(flag == 1)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }

    


    return 0;
}
