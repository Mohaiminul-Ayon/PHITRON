#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    char a[5]="AYON";//null er jonno array er size 1 beshi nisi

                    // "" dile automatic null niye ney string e 
                    //null o ekti char

    int sz=sizeof(a)/sizeof(char); //size ber korar jonno
    printf("%d\n",sz);
    printf("%s",a); //string er jonno %s use kora hoy

    return 0;
}
