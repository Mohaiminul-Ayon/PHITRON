#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
void odd_even(void)
{
    
    int n;
    scanf("%d",&n);

    int a[1001];
    for(int i =0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    int odd=0,even=0;
for(int i =0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    printf("%d %d",even,odd);
    return;
}
int main() 
{
    
    
    odd_even();
    return 0;
}
