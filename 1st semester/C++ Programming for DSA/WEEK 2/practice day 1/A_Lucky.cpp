#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    int t;
    cin>>t;
    cin.ignore();
    for(int i=0;i<t;i++)
    {
        string s;
    cin>>s;
    string a(s,3);
    s.resize(3);

    
    // cout<<a<<endl;
    // cout<<s<<endl;
     int m=0,n=0;
    for(char c : s)
    {
       
        int t=c-48;
        m+=t; 
    }
    for(char c : a)
    {
       
        int t=c-48;
        n+=t; 
    }
    if(m==n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }

    

    return 0;
}
