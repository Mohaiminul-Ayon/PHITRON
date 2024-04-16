#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);  
        }
        
    }

    int n;
    scanf("%d",&n);
    for(int i=0;i<row;i++)
    {
        printf("%d \n",a[i][n]);
    }
    // for(int i=0;i<5;i++)
    // {
    //     for(int j=0;j<3;j++)
    //     {
    //         printf("%d  ",a[i][j]);  
    //     }
    //     printf("\n");
    // }

    return 0;
}
