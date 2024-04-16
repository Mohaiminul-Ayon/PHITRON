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
    for(int i=1;i<=n;i=i*2)////o(log n)
    {
        cout<<i<<endl;
    }
    
while(n>0)//o(log n)
    {
        int digit = n%10;
    
        cout<<digit<<endl;
        n = n/10;
    }

    return 0;
}
