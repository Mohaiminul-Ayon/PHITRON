#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
    char x;
    scanf("%c",&x);
    
    if(x>47 && x<59 )
        printf("IS DIGIT");

    if(x>64 && x<91 )
        printf("ALPHA\nIS CAPITAL");

    if(x>96 && x<124 )
        printf("ALPHA\nIS SMALL");

    

    return 0;
}
