#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    int n;
    scanf("%d",&n);
    
    int cnt=0;
    for(int i=1;i<=n;i+=2)
    {
        cnt++;
    }

    int m=cnt+5;
    int k=1;
    int s=m-1;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int l=1;l<=k;l++)
        {
            printf("*");
        }

        k+=2;
        s--;
        printf("\n");
    }

   
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            printf(" ");
        }
        for(int l=1;l<=n;l++)
        {
            printf("*");
        }

        printf("\n");
    }




    return 0;
}
