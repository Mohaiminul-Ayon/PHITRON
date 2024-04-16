#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    int mi = INT_MAX,s=0;
    int ma = INT_MIN,l=0;


     for(int i=0;i<n;i++)
    {
        if(mi>a[i])
        {
               mi=a[i];
               s=i;
        }
         

        if(ma<a[i])
        {
             ma=a[i];
             l=i;
        }
           
    }
    int temp=0;
    temp=a[s];
    a[s]=a[l];
    a[l]=temp;

 
     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
     

    return 0;
}
