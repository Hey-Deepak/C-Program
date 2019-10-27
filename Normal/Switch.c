/*
 ============================================================================
 Name        : Hello world
 Author      : Deepak Choudhary
 Description :
 ============================================================================
 */
#include<stdio.h>

int main()
{   int age;
    printf("Enter your Age\n");
    scanf("%d", &age);

    switch (age)
    {
    case 1: 
        printf("You Just Enter 1\n");
        break;
    
    default:
        printf("You Enter %d\n", age);
        break;
    }
    
    return 0;
}