#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    int n;
    scanf("%d",&n);
    int a[n],i,sum1=0,sum2=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

      for(i=0;i<n;i++)
    {
       if(a[i]>0)
       {
        sum1+=a[i];
       }
       else
       {
         sum2+=a[i];
       }
    }
    printf("%d %d",sum1,sum2);

    return 0;
}
