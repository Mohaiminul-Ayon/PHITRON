#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
int sum(int x,int y)
{
    int s=(x+y);
    return s;
}
int main() 
{
    int x,y;
    scanf("%d %d",&x,&y);

    int s = sum(x,y);
    printf("%d",s);

    return 0;
}
