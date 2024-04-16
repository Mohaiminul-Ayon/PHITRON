#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    vector<int> v={1,2,3,4,5,6,7,8,9};
    vector<int> v2={10,30,40,50};

    v.insert(v.begin()+2,v2.begin(),v2.end());
    // v.erase(v.begin()+2,v.end()-2);
    
    for(int x:v)
    {
        cout<<x<<" "; 
    }

    return 0;
}
