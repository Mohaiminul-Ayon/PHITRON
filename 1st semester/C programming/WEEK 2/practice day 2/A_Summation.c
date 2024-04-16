#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    long long int n;
    scanf("%lld",&n);

    long long int a[n],i,sum=0;

    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
      for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("%lld",llabs(sum));
    
    return 0;
}
