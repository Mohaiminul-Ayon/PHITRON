#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    char s[100001];
    scanf("%s",s);

    int cnt=0;
for(int i=0;i<strlen(s);i++)
{
    if(s[i]!='a' &&  s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
    {
        cnt++;
    }
}
    printf("%d",cnt);

    return 0;
}
