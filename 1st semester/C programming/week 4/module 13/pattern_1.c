#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    int n,k=1;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=k;j--)
        {
            printf("*");
        }
        
        printf("\n");
        k++;
    }

    return 0;
}
