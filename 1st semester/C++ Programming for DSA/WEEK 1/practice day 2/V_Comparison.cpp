#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    int a,b;
    char s;
    cin>>a>>s>>b;
    if (s == '>')
    {
        if(a>b)
        {
            cout<<"Right"<<endl;
        }
        else{
            cout<<"Wrong"<<endl;
        }
    }
    else if (s == '<')
    {
        if(a<b)
        {
            cout<<"Right"<<endl;
        }
        else{
            cout<<"Wrong"<<endl;
        }
    }
    else if (s == '=')
    {
        if(a==b)
        {
            cout<<"Right"<<endl;
        }
        else{
            cout<<"Wrong"<<endl;
        }
    }
    


    return 0;
}
