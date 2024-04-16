#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
int my_abs(int x)
{
    if(x<0)
    {
        x= x*(-1);
    }
return x;
}
int main() 
{
    int x;
    scanf("%d",&x);
    int a = my_abs(x);  
    printf("%d",a);
    return 0;
}
