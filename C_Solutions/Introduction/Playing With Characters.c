#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch ; 
    char s1[100] ; 
    char s2[100] ; 
    scanf("%c",&ch) ;
    scanf("\n"); 
    scanf("%[^\n]%*c",s1) ; 
    scanf("\n"); 
    scanf("%[^\n]%*c",s2) ;
    scanf("\n"); 
    printf("%c\n%s\n%s",ch,s1,s2) ;  
    return 0;
}

