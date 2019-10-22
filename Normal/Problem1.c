#include<stdio.h>
#include<stdlib.h>
int main()
{
  char y;
  float a,b,c,d;
 
  printf("Enter the first number\n");
  scanf("%f",&a);
  printf("Enter the second number\n");
  scanf("%f",&b);
  printf("Enter the operation:\n+\n-\n*\n/\n");
  scanf(" %c",&y);
 
  
 
   switch(y)
 {
   case '+': c=a+b; //Case label 1
          printf("ADDITION of two numbers is %f",c);
          break;
   case '-': c=a-b;
           printf("SUBTRACTION of two numbers is %f ",c);
           break;
   case '*': c=a*b;
           printf("MUTIPICATIOM of two numbers is %f",c);
           break;
           
   case '/': d=a/b;
           printf("DIVISON of two numbers is %f ",d);
           break;
           
   default:
             printf("Invalid operator");
             break;
   }
 return 0;
     }