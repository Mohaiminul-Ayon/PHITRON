#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
         string s;
    cin>>s;
    string x;
    cin>>x;
    while(s.find(x)!=-1)
    {
        s.replace(s.find(x),x.size(),"#");

    }
    cout<<s<<endl;
    }
   

    return 0;
}
