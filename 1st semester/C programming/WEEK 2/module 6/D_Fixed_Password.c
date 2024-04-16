#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
    int n=9999;
    int i,a;
    for( i=1;i<=n;i++)
    {
        
        scanf("%d",&a);

    if (a!=1999)
        printf("Wrong\n");

    else if(a==1999)
    {
        printf("Correct");
       break; 
    }
    
    }
    
    return 0;
}
