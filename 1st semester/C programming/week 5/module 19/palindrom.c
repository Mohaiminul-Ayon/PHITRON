#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
// void fun(char s[],int i)

// {
//     if (i == '\0') return s[i-1];
//     char a[i] = s[i];
//     char 

// }
int main() 
{
    char s[100],a[100];
    gets(s);
    strcpy(a,s);
    int flag =0;
    int i=0,j=strlen(a)-1;
    while(i<j)
    {
         if (s[i]!=a[j])
            {
                flag=1;
            }
            i++;
            j--;
    }
    // for(int i=0;i<strlen(s);i++)
    // {
    //     for(int j=strlen(a);j>=0;j--)
    //     {
    //         if (s[i]!=a[j])
    //         {
    //             flag=1;
    //         }
    //     }
    // }
    if(flag == 0)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
    return 0;
}
