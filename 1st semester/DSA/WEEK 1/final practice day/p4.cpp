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
    vector<int>v(n);
    for (int i = 0; i < n; i++)

    {
        cin>>v[i];
    }
    int m;
    cin>>m;
    vector <int>v2(m);
    for (int i = 0; i < m; i++)
    {
        /* code */
        cin>>v2[i];
    }
    int x;
    cin>>x;

    v.insert(v.begin()+x,v2.begin(),v2.end());
    
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout<<v[i]<<" ";
    }
    

    return 0;
}
