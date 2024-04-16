#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <utility>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,val=0;
        cin>>n;
        int a[n];
        int mn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                val =a[i]+a[j]+j-i;
                mn = min(mn,val);
            }
        }
        cout<<mn<<endl;;
    }
    

    return 0;
}
