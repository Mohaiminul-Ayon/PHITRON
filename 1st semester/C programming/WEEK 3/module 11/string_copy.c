#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h> 

int main() 
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    
    strcpy(a,b);
    /*for(int i=0;i<=strlen(b);i++)
    {
        a[i]=b[i]; 
    } */
    printf("%s %s",a,b);
    return 0;
}
