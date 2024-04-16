#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int tumba ,pumba,sub;
    scanf("%d %d",&tumba,&pumba);

    sub=tumba-pumba;


    if(tumba>=pumba)
    printf("%d",sub);
    
    else
    printf("0");

    return 0;
}
