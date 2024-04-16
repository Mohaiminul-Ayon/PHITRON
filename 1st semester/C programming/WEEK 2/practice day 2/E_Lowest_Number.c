#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
     long long int n;
    scanf("%lld",&n);

    long long int a[n],i,temp = LONG_LONG_MAX,x=0;

    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }

  //
       for(i=0;i<n;i++)
    {
        if(temp>a[i])
        {
            temp = a[i];
            x=i+1;
        }
        
    }
    printf("%lld %lld",temp,x);
    

    return 0;
}
