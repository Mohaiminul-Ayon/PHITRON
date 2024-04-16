#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    char a[100],b[100];
    scanf("%s %s",a,b);

    int i=0;
    while(1)
    {
        if(a[i]=='\0' && b[i]=='\0')
        {
            printf("same");
            break;

        }
        else if(a[i]=='\0')
        {
            printf("a choto");
            break;
        }
        else if(b[i]=='\0')
        {
            printf("b choto");
            break;
        }

        if(a[i]==b[i])
        {
            i++;
        }
        else if(a[i]<b[i])
        {
            printf("a choto");
            break;
        }
        else
        {
            printf("b choto");
            break;
        }

    }

    return 0;
}
