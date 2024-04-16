#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    int s[1000],t[1000];

    gets(s);
    gets(t);

    int st1 = strlen(s);
    int st2 = strlen(t);

    printf("%d %d\n",st1,st2);
    printf("%s %s",s,t);

    return 0;
}
