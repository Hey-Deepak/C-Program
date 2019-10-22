#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{ float x,y,z,s,a;
  clrscr();
  printf("Enter the values of a triangle's length i.e. x,y,z");
  scanf("%f %f %f",&x,&y,&z);
  s=(x+y+z)/2;
  a=sqrt((s*(s-x)*(s-y)*(s-z)));
  printf("The area of triangle is %f",a);
  getch();
}