#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    float a ,b ,c;
    scanf("%f %f",&a,&b);
    c= b/(1.0-(a/100.0));

    printf("%.2f",c);
    return 0;
}
