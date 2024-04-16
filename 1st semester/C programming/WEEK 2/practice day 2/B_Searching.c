#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    long long int n;
    scanf("%lld",&n);

    long long int a[n],i,flag=-1;

    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    long long int x;
    scanf("%lld",&x);

      for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
           flag=i;
            break;
        }
    }
    if (flag==-1)
    {
        printf("-1");
    }
    else{
        printf("%lld",flag);
    }


    
    return 0;
}
