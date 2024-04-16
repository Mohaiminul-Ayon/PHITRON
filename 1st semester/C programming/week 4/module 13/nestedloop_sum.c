#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    int n,flag=0;
    scanf("%d",&n);
    int a[10001];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==x)
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        printf("yes");
    }
    else{
        printf("no");
    }

    return 0;
}
