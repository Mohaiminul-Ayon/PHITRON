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
    char s1,s2;
    cin>>a>>s1>>b>>s2>>c;
    if (s1 == '+')
    {
        if(a+b == c)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<a+b<<endl;
        }
    }
    else if (s1 == '-')
    {
        if(a-b == c)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<a-b<<endl;
        }
    }
    else if (s1 == '*')
    {
        if(a*b==c)
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<a*b<<endl;
        }
    }
    


    return 0;
}
