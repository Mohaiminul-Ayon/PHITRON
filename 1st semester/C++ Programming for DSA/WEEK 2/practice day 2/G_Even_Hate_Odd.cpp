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
    int a[n];
    int m=n/2;

    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    if(n%2=0)
    {
        cout<<"-1"<<endl;
    }
    else{
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0){
                cnt1++;
            }
            if(a[i]%2!=0)
            {
                cnt2++;
            }

        }

        int x = cnt1-cnt2;
        int y = x/2;
        cout<<abs(y)<<endl;
    }
    }

 

    return 0;
}
