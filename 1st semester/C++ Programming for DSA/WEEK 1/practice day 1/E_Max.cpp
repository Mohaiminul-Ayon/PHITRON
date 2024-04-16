#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>


using namespace std;

int main() 
{
    int n,m=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }    
    for(int i=0;i<n;i++)
    {
        m = max(m,a[i]);

    }
    cout<<m<<endl;

    return 0;
}
