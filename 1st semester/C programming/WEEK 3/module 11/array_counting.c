#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    int n;
    scanf("%d",&n);
    int cnt[100]={0};
    
    int a[100];


     for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);   
        }
    
    
    //int zero=0;
    
   
     for(int i=0;i<n;i++)
    {
        int val = a[i];
       cnt[val]++;
    }
    for(int i=0;i<=7;i++)
    {
       printf("%d - %d\n",i,cnt[i]);
    }

    
    

    return 0;
}
