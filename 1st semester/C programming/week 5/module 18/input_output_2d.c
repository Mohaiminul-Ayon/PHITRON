#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    int a[5][3];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);  
        }
        
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d  ",a[i][j]);  
        }
        printf("\n");
    }

    return 0;
}
