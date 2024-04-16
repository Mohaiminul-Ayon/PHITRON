#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    int x=10;
    printf("%p\n",&x);

    int *p=&x;

    printf("%p\n",p);
    
    *p=500;
    printf("%d\n",x);

    return 0;
}
