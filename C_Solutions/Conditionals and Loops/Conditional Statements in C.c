#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x ; 
    scanf("%d",&x);
    if (x==1)
        printf("one");
    else if (x==2)
        printf("two") ; 
    else if (x==3)
        printf("three");
    else if (x==4)
        printf("four");
    else if (x==5)
        printf("five");
    else if (x==6)
        printf("six");
    else if (x==7)
        printf("seven");    
    else if (x==8)
        printf("eight");
    else if (x==9)
        printf("nine");
    else
        printf("Greater than 9");    
    return 0;
}
