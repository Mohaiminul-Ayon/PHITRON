#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>


using namespace std;

int main() 
{
    int a,b,c;
    cin>>a>>b>>c;
    int x=0,y=0;
    x = max({a,b,c});
    y = min({a,b,c});
    cout<<y<<" "<<x<<endl;

    return 0;
}
