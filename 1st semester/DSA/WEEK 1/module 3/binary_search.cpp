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
    
    sort(a,a+n);
    int x;
    cin>>x;

    int mid=0,l=0,r= n;
    while(l<=r)
    {
        
        
        mid = (l+r)/2;

        if(a[mid]==x)
        {
            cout<<"found in index = ";
            break;
        }
        
        else if(a[mid] > x)
        {
            l=mid+1;
        }
        else if(a[mid] < x)
        {
            r = mid-1;
        }


    }

    return 0;
}
