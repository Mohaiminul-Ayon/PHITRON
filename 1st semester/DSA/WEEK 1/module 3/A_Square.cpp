#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
 int q;
 cin>>q;
 while (q--)
 {
    /* code */
       // vector<int>v;
    int a[4][2];
    for (int i = 0; i < 4; i++)
    {
        /* code */
        for (int j = 0; j < 2; j++)
        {
            /* code */
            cin>>a[i][j];
        }
        
    }
    int mn = min({a[0][0],a[1][0],a[2][0],a[3][0]});
    int mx = max({a[0][0],a[1][0],a[2][0],a[3][0]});
    int dif = mx - mn;
    cout<<dif*dif<<endl;

    
 }
 


    

    return 0;
}
