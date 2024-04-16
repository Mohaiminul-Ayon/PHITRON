#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;

int main() 
{

    int n,q;
    cin>>n>>q;
    int a[n];
    int pre[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            pre[i]=a[i];
        }
        else{
                pre[i] = a[i]+pre[i-1];

        }
       
    }
    while (q--)
    {
        /* code */
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        int sum=0;
        if(l==0)
        {
            sum=pre[r];
        }
        else{
            sum=pre[r]-pre[l-1];
        }
        cout<<sum<<endl;
    }
    

    
    
    

    return 0;
}
