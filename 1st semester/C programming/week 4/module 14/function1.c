#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int sum(int x,int y)
{
    int sum=x+y;

    return sum;
}
int main() 
{
   //int s=  sum(10,5);

   printf("%d\n",sum(10,5));
   printf("%d\n",sum(200,5));
   printf("%d\n",sum(55,5));

    return 0;
}
