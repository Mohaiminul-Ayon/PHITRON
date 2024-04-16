#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    long long int n;
    scanf("%lld",&n);

    long long int a[n],i;

    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            a[i]=1;
        }
        else if(a[i]<0)
        {
            a[i]=2;
        }
        else if (a[i]==0)
        {
            a[i]=0;
        }
    }
    
    for(i=0;i<n;i++)
    {
        printf("%lld ",a[i]);
    }

    
    return 0;
}
