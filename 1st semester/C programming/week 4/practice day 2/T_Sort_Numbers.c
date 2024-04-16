#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    
    int a[1000];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[1000];
    for(int i=0;i<3;i++)
    {
       b[i]=a[i];
    }
    
    for(int i=0;i<2;i++)
    {
        for(int j=1;j<3;j++)
        {
            if(b[i]>b[j])
            {
                int temp=b[i];
                b[i]=b[j];
                b[j]=temp;

            }
        }    
    }
    for(int i=0;i<3;i++)
    {
       printf("%d\n", b[i]);
    }
    printf("\n");
    for(int i=0;i<3;i++)
    {
       printf("%d\n", a[i]);
    }



    return 0;
}
