#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
    int x,div;
    scanf("%d",&x);
    div = x/1000;
    
    if(div%2 == 0)
        printf("EVEN");

    else if(div % 2 == 1)
        printf("ODD");

    return 0;
}
