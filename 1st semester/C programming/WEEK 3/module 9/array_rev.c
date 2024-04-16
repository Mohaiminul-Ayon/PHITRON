#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    int n;
    scanf("%d",&n);


    int a[n],temp=0;

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    
    
    int j=n-1,i=0;
    while(i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;

        i++;
        j--;

    }

    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

    return 0;
}
