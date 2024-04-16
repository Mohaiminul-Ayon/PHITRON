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
    cin>>s;
    vector<int>v(26,0);

    // v[0]=v[0]+188;
    // for(int x:v)
    // {
    //     cout<<x<<endl;
    // }
    for(char x:s)
    {
        int a= x-'a';
         v[a]=v[a]+1;
    }

    // for(int i=0;i<26;i++)
    // {
    //     int x = s[i]-'a';
    //     v[x]=v[x]++;
    // }
    for(int i=0;i<26;i++)
    {
       if(v[i]!=0)
       {
        cout<<char(i+'a')<<" : "<<v[i]<<endl;
       }
    }


    return 0;
}
