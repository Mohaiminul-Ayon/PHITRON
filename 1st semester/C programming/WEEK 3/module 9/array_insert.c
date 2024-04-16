#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    int i,n,pos;
    scanf("%d",&n);


    int a[n+1];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    scanf("%d",&pos);

    for (i=n;i>=pos+1;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=100;
    
     for(i=0;i<n+1;i++)
        printf("%d ",a[i]);

    return 0;
}
