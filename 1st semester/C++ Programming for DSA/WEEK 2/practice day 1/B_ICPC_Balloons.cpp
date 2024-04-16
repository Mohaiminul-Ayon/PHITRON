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
            int n;
    cin>>n;
    cin.ignore();
    string s;
    cin>>s;
    s.resize(n);
    
    int cnt[26]={0};
    int cn=0;
    for(int i=0;i<s.size();i++)
    {
        int val=s[i]-'A';
        cnt[val]++;
        if(cnt[val]<=1)
        {
            cn+=2;
        }
        else
        {
            cn++;
        }

    }
    cout<<cn<<endl;

    }


    // for(int i=0;i<26;i++)
    // {
    //     if(cnt[i]!=0)
    //     {
    //            cout<<(char)(i+'A')<<" "<<cnt[i]<<endl;
    //     }

    // }


    return 0;
}
