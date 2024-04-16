#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    double x;
    scanf("%lf",&x);

    int c=ceil(x);
    printf("%d\n",c);

    int f=floor(x);
    printf("%d\n",f);

    

    return 0;
}
