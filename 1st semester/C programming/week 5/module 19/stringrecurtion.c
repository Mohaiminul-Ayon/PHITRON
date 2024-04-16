#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
int fun(char s[],int i)
{
    if(s[i]=='\0') return 0;
    int ans = fun(s,i+1);
    if('A'<=s[i] && 'Z'>=s[i])
    {
        s[i]=s[i]+32;  
    }
    if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' || s[i]=='o'||s[i]=='u' )
    {
        ans+=1;
    }
    return ans;

}
int main() 
{
    char s[100];
    fgets(s,100,stdin);

    int a = fun(s,0);
    if('A'<=s[0] && 'Z'>=s[0])
    {
        s[0]=s[0]+32;  
    }
    if(s[0]=='a' ||s[0]=='e' ||s[0]=='i' || s[0]=='o'||s[0]=='u' )
    {
        a=a+1;
    }
    printf("%d",a);
    return 0;
}
