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
    int cnt=0;

    for(int i=0;i<n;i++)
    {
        cin>>v[i];

    }
    
    
    for(int x:v)
    {
        auto it = find(v.begin(),v.end(),(x+1));
        if (it != v.end()) cnt++;

    }
    cout<<cnt;
    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // }

    return 0;
}
