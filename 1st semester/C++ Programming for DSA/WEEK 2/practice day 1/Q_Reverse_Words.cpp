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
    string words;

    bool flag=false;

    while (ss>>words)
    {
        if (flag==true)
        {
            cout<<" ";
        }
        reverse(words.begin(),words.end());
        cout<<words;
        flag=true;

    }

    //cout<<cnt<<endl;

    return 0;
}
