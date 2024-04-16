#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
int fun(char s[],int i)
{
    if(s[i]=='\0') return 0;
    int l= fun(s , i+1);
    return l+1;
}
int main() 
{
    char s[1000];
    scanf("%s",s);

    int x= fun(s,0);
    printf("%d",x);

    

    return 0;
}
