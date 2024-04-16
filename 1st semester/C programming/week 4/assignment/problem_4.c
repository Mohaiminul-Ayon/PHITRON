#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
int is_palindrome(char s[])
{
    int x=1;

int i=0;
int j=strlen(s)-1;
while(i<j)
{
    if(s[i]!=s[j])
    {
        x=0;
    }
    i++;
    j--;

}

   


    return x;
}
int main() 
{
    char s[1001];

    scanf("%s",s);







    int x = is_palindrome(s);
    
    if(x==1)
    {
        printf("Palindrome");
    }
    else{
         printf("Not Palindrome");
    }
    // printf("%d",x);
    return 0;
}
