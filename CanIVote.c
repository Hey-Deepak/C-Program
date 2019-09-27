/*
 ============================================================================
 Name        : Can I Cast My Vote.
 Author      : Deepak Choudhary
 Description : 
 ============================================================================
 */

#include<stdio.h>

int main()
{   
    int x;
    printf("Enter Your Age: \n");
    scanf("%d", &x);

    if (x>=18)
    {
       printf("Your age is %d and You are eligible to Cast Vote \nCongratulation. \n:D", x);
    }
    
    else
    {
       printf("Your age is %d and You are Not eligible to Cast Vote \nAfter %d year you can cast your Vote.\nBetter Luck Next Time.\n:D", x, 18-x);
    }
    
    
   return 0;
}