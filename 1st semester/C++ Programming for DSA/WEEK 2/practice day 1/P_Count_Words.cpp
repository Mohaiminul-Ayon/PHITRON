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

    int cnt=0;

    while (ss>>words)
    {
        int flag=0;
        for (char c:words)
        {
            if(c>='a' && c<='z' || c>='A' && c<='Z')
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cnt++;
        }
        flag=0;
    }
    cout<<cnt<<endl;

    return 0;
}
