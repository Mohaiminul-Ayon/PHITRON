#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);
        int x = m1+m2;
        int y= m1*d;
        int z=y/x;
        int a = d-z;
   
             printf("%d\n",a);
       
       
    }

    return 0;
}
