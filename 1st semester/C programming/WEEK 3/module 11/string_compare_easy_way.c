#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    char a[100],b[100];
    scanf("%s %s",a,b);

    int v=strcmp(a,b);
    if(v<0)
    {
        printf("a choto");

    }
    else if(v>0)
    {
        printf("b choto");

    }
    else{
        printf("same");
    }

    return 0;
}
