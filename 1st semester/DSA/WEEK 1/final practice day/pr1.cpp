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
        /* code */
        cin>>v[i];
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        /* code */
    
            /* code */
        auto it = find(v.begin()+(i+1),v.end(),v[i]);
        if(it != v.end())
        {
            flag = true;
            break;
        } 
        

    
    // else cout<<"not found";
        
    }
    if(flag == true)
    cout<<"YES";
    else cout<<"NO";
    
    

    return 0;
}
