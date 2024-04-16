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
    vector<int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];

    }
    
    
    for(int x:v)
    {
        if(x<0)
        {
            replace(v.begin(),v.end(),x,2);
        }
        else if(x>0)
        {
            replace(v.begin(),v.end(),x,1);
        }

    }
    for(int x:v)
    {
        cout<<x<<" ";
    }

    return 0;
}
