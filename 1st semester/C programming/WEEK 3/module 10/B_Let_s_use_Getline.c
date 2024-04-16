#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    char s[1000001];
    fgets(s,1000001,stdin);
    for(long long int i=0;s[i]!='\\';i++)
    {
        printf("%c",s[i]);
    }
  
    return 0;
}
