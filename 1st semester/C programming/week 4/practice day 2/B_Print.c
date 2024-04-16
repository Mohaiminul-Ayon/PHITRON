#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

void print(int x)
{
    for(int i=1;i<x;i++)
    {
        printf("%d ",i);
    }
    printf("%d",x);
    return;
}
int main() 
{
    int n;
    scanf("%d",&n);
    print(n);

    return 0;
}
