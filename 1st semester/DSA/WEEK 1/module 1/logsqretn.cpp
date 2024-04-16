#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    int *n = new int;
    cin>>*n;
    // for(int i=1;i<=sqrt(n);i++)
    // {
    //     if(n%i==0)
    //     {
    //         cout<<i<<" ";
            
    //         if(n/i != i)
    //             {
    //                 cout<<n/i<<endl;
    //             }
    //     }

    // }
    for(int i=1;i*i<=*n;i++)
    {
        if(*n%i==0)
        {
            cout<<i<<" ";

                if(*n/i != i)
                {
                    cout<<*n/i<<endl;
                }
        }

    }

    return 0;
}
