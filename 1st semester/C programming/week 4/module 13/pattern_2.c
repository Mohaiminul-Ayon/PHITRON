#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    int n,k,s;
    scanf("%d",&n);
    s=0;
    k=(2*n)-1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        s++;
        k-=2;
        printf("\n");
    }

    return 0;
}
