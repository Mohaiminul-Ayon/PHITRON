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

    //  for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }

    int flag=0;

     if (row!=col)
    {
        flag=1;
    }
    
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                if(a[i][j]!=1)
                {
                    flag=1;
                }  
            }
            else if(i+j==row-1)
            {
                if(a[i][j]!=1)
                {
                    flag=1;
                }
            }
             else 
                {
                    if(a[i][j]!=0)
                    {
                        flag=1;
                    }
                    
                }
        }
    }
    if(flag==0)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    // printf("%d",flag);

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=m;j>=0;j--)
    //     {
    //         if(i==j)
    //         {
    //             if(a[i][j]!=1)
    //             {
    //                 flag=1;
    //             }
    //         }
    //     }
    // }

    return 0;
}
