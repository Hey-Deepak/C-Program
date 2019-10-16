#include "numbers.h"
#include<stdio.h>
int main()
{   int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("%d %s a Armstrong number", x, isArmstrongNo(x)==0 ? "is not" : "is");
    
    //printf("No. of digits in %d are %d", x, getNoOfDigits(x));
    return 0;  
}