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
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
   

    for(int j=0;j<col;j++)//last row
    {
        
            printf("%d ",a[row-1][j]);
        
    }

     printf("\n");

    for(int i=0;i<row;i++)//last col
    {
        
            printf("%d ",a[i][col-1]);
        
    }
    


    return 0;
}
