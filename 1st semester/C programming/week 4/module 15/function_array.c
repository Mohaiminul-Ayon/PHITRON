#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
void fun(int ar[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
}
int main() 
{
    int ar[5]={10,20,30,40,50};

    fun(ar,5);

    return 0;
}
