#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char a;
    scanf("%c",&a);
    if(a=='z')
    {
        a=a-25;
    }
    else if(a>='a' && a<'z')
    {
        a++;
       
    }
    printf("%c",a);
    
    return 0;
}
