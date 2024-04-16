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
    for(int j=0;j<test;j++)
    {
        int n;
        cin>>n;
        char s[10];
        cin>>s;
        for(int i=0;i<n;i++)
        {

            if(i!=(n-1))
            {
                cout<<s<<" ";
            }
            else{
                cout<<s;
            }

        }
        cout<<endl;
 
    }


    return 0;
}
