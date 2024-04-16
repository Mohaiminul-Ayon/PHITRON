#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    char s[100001];
    while(cin.getline(s,100001))
    {
        
        sort(s,s+strlen(s));
        for(int i=0;i<strlen(s);i++)
        { 
        if(s[i]==' ')
            {
                continue;
            }
            cout<<s[i];
        }
        cout<<endl;
        
    }
 

    return 0;
}
