#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    int test;
    scanf("%d",&test);
    for(int f=0;f<test;f++)
    {
            int n;
        scanf("%d",&n);

        int a[n];

        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        // for(int i=0;i<n;i++)
        // {
        //     printf("%d ",a[i]);
        // }

        int b[n];
        
        for(int i=0;i<n;i++)
        {
            b[i]=a[i];
        }
        
        // for(int i=0;i<n;i++)
        // {
        //     printf("%d ",b[i]);
        // }
        int temp=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(b[i]>b[j])
                {
                    temp=b[j];
                    b[j]=b[i];
                    b[i]=temp;
                }
            }
        }
        
        int c[n];
        for(int i=0;i<n;i++)
        {
            c[i]=a[i]-b[i];
        }

        for(int i=0;i<n;i++)
        {
            printf("%d ",abs(c[i]));
        }
        printf("\n");
    }
    
    return 0;
}
