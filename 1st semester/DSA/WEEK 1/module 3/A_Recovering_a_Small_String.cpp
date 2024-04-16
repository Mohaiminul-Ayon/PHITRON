#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    int q;
    cin>>q;
    while(q--)
    {
            int n;
    cin>>n;

    int x=0,y=0,z=0;
    for(int i=0;i<26;i++)
    {
        x=i;
        for(int j=0;j<26;j++)
        {
            y=j;
            for(int k=0;k<26;k++)
            {
                z=k;
                if (  (x+1)+(y+1)+(z+1) == n)
                {
                    break;
                }

            }
                if (  (x+1)+(y+1)+(z+1) == n)
                {
                    break;
                }

        }
                if (  (x+1)+(y+1)+(z+1) == n)
                {
                    break;
                }

    }
    cout<<char(x+'a')<<char(y+'a')<<char(z+'a')<<endl;

    }

    return 0;
}
