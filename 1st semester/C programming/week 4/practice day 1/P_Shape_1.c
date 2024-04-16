#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    int n ;
    scanf("%d",&n);
    int k =n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        k--;
        printf("\n");
    }

    return 0;
}
