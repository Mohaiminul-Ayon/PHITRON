#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
void mm(int a[],int n)
{
    int b=INT_MAX,c=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if (a[i]<b)
        {
            b=a[i];
        }
        if(a[i]>c)
        {
            c=a[i];
        }
       
         
     }
    printf("%d %d",b,c);
}
int main() 
{
    int n;
    scanf("%d",&n);
    int a[1000];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mm(a,n);
   

    return 0;
}
