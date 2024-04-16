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
    char s[n+1];
    cin>>s;
    sort(s,s+n);
    // for(int i=0;i<n;i++)
    // {
    //   cout<<s[i];
    // }
    cout<<s;
  

    return 0;
}
