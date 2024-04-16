#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    double a;
    cin>>a;
    
    int n;
    cin>>n;
    double y=0;
    for(int i=2;i<=n;i+=2)
    {
        y+=pow(a*1.0,i*1.0);
    }
    
    cout<<round(y)<<endl;


    //cout<<y;
    

    return 0;
}
