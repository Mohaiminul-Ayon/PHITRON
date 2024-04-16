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
        scanf("%d",&a[i]);

       int m;
    scanf("%d",&m);


    int b[m];

    for(int j=0;j<n;j++)
        scanf("%d",&b[j]);

    int arr[n+m];
    for(int i=0;i<n;i++)
    {
        arr[i]=a[i];
    }
    int i=n;
    
    for(int j=0;j<m;j++)
    {
        arr[i]=b[j];
        i++;
    }
    for(i=0;i<n+m;i++)
    {
        printf("%d ",arr[i]);

    }



    return 0;
}
