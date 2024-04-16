#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    long long int x=10;

    long long int *ptr =&x;

    int *ptr2 = ptr;

    
    *ptr2 =200;
    
    printf("x er address    - %p\n",&x);
    printf("ptr er value    - %p\n",ptr);
    printf("ptr2 er value   - %p\n",ptr2);
    printf("ptr er address  - %p\n",&ptr);
    printf("ptr2 er address - %p\n",&ptr2);
    printf("ptr er size     - %d\n",sizeof(ptr));
    printf("ptr2 er size    - %d\n",sizeof(ptr2));
    printf("x er size       - %d\n\n",sizeof(x));

    printf("x er value    - %d\n",x);
    //printf("x er value by dereference ptr - %d\n",*ptr);
    printf("x er value by dereference ptr2- %d\n",*ptr2);

    return 0;
}
