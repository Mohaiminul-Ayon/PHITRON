#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
int char_to_ascii(char x)
{
    int c= x;
    return c;
}
int main() 
{
    char s;
    scanf("%c",&s);
    int c = char_to_ascii(s);
    printf("%d",c);

    return 0;
}
