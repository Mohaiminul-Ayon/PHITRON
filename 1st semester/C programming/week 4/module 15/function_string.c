#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
void fun (char s[])
{
      for(int i=0;i<strlen(s);i++)
    {
        printf("%c",s[i]);
    }
}
int main() 
{
    char s[20];
    gets(s);
    fun(s);
    

    return 0;
}
