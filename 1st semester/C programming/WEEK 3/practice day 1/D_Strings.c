#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    char a[1000],b[1000];
    fgets(a,1000,stdin);
    fgets(b,1000,stdin);

    int st1= strlen(a);
    int st2= strlen(b);

    char c[a+b];
    for(int i=0;i<st1;i++)
    {
        c[i]=a[i];
    }
    int i=st1;
     for(int j=0;j<st1;j++)
    {
        c[i]=b[j];
        i++;
    }
    
    printf("%s",c)

    return 0;
}
