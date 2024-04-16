#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>a[i];
    }
    int pre[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(i==0)
        {
            pre[0]=a[0];
        }
        else{
            pre[i]=pre[i-1]+a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
     cout<<pre[i]<<" ";   /* code */
    }
    cout<<endl;
    int l,r;
    cin>>l>>r;
    int sum=0;

    if(l==0)
    {
        sum=pre[r];
    }
    else{
        sum=pre[r]-pre[l-1];
    }
    cout<<sum;

    
    

    return 0;
}
