#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
int fun (int a[],int n,int i)
{
    if(i==n-1) return a[i];
    // int min = azzzz
   

    int max = fun(a,n,i+1);
    if(a[i]>max)
    {
        max=a[i];
    }
    return max;


}
int main() 
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max = fun(a,n,0);
    printf("%d",max);

    return 0;
}
