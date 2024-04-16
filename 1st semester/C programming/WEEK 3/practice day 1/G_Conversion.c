#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    char s[1000];
    fgets(s,1000,stdin);

    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
             s[i]+=32;
        }
        else if( s[i]>='a' && s[i]<='z')
        {
            s[i]-=32;
        }
        else if( s[i]==',')
        {
            s[i]=' ';
        }
    }
    printf("%s",s);

    return 0;
}
