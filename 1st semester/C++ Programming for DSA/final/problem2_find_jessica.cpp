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
    getline(cin,s);
    stringstream ss(s);
    string word;
    bool flag=false;
    while(ss>>word)
    {
        if(word == "Jessica")
        {
            flag=true;
            break;
        }
        
    }
    if(flag==true)
    {
        cout<<"YES"<<endl;
    }
    else
    cout<<"NO"<<endl;

    return 0;
}
