#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
    char x,y;
    scanf("%c",&x);
    if(x>='z')
    {
        y=x-32;
    }
    else
        y=x+32;
    
    printf("%c",y);

    return 0;
}
