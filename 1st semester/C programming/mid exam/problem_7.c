#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    int T;
    scanf("%d",&T);

    for(int k=0;k<T;k++)
    {
        int n;
         scanf("%d",&n);

        int a[10001];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        } 
        int x,flag=0;
        scanf("%d",&x);
         
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                flag=1;
            }
        } 
        if(flag==1)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
       
    }

    return 0;
}
