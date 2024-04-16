#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
void fun(int *ptr)
{
    printf("main er x er value  - %d\n\n",*ptr);
    
    printf("ptr er address      - %p\n\n",&ptr);

    printf("ptr er value        - %p\n",ptr);
    int x;
    scanf("%d\n",&x);
    *ptr=x;
}
int main() 
{
    int x=10;
    fun(&x);
    printf("x er address        - %p\n\n",&x);
    printf("fun function e dereference korar por - %d",x);
    return 0;
}
