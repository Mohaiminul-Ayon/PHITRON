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
    vector<int> v1(n);
    vector<int> v2(n);
    vector<int> c;
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];

    }
    for(int i=0;i<n;i++)
    {
        cin>>v2[i];
    
    }

    
    for(int x:v2)
    {
        c.push_back(x);
    }
    for(int x:v1)
    {
        c.push_back(x);
    }
    for(int x:c)
    {
        cout<<x<<" ";
    }

    return 0;
}
