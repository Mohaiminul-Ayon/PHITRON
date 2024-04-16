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
    //cout<<s;
    stringstream ss(s);
    string word;
    int cnt=0;
    while(ss >> word)
    {
        cnt++;
                cout<<word<<endl;
    }
    cout<<cnt<<endl;
    return 0;
}
