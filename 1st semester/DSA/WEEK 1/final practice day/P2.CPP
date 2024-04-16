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
    //reverse(a,a+n);
    int pr[n];

    for (int i = 0; i < n; i++)
    {
        /* code */
        if(i==0)
        {
            pr[0]=a[0];
        }
        else
        {
            pr[i]=pr[i-1]+a[i];
        }

    }
    reverse(pr,pr+n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<pr[i]<<" ";
    }
    
    
    
    
    

    return 0;
}
