#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    string s;
    // cin>>s;
    getline(cin,s);
    sort(s.begin(),s.end());
    cout<<s;

    return 0;
}
