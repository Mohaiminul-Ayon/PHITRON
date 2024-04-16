#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;
void print(stringstream& ss)
{
    string word;
    if(ss>>word)
    {

        print(ss);
        cout<<word<<endl;
    }
}
int main() 
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    print(ss);

    //string word;

    // while(ss>>word)
    // {
    //     cout<<word<<endl;
    // }

    return 0;
}
