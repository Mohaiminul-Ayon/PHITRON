#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
void small_to_capital(char x)
{
    char c = x-32;
    printf("%c",c);
}
int main() 
{
    char s;
    scanf("%c",&s);
    small_to_capital(s);
    

    return 0;
}
