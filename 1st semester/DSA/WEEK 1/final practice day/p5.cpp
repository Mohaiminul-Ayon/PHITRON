#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include<bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin>>n;
    int l,r;
    l=1;
    r=n;
   
    char s=' ';
    while(l<=r)
    {
        if(n==1)
        {
            cout<<"X";
            break;
        }
        for(int i=1;i<=n;i++)
        {
            if(i==l && i==r)
            {
                cout<<"X";
            
            }
            else if(i==l)
            {
                cout<<"\\";
            }
            else if(i==r)
            {
                cout<<"/";
            }

            else{
                cout<<s;
            }
            
        }
            cout<<endl;

        l++;
        r--;
   
    }

    while(r<l)
    {
        if(n==1)
        {
            break;
        }
        for(int i=n;i>0;i--)
        {

            if(i==l)
            {
                cout<<"/";
            }
            else if(i==r)
            {
                cout<<"\\";
            }

            else{
                cout<<s;
            }
            
        }
       
        if(l==n)
        {
            break;
        }
        l++;
        r--;
        cout<<endl;
     
    }


    return 0;
}
