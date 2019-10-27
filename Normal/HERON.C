#include<stdio.h>
#include<math.h>
int main()
{ float x,y,z,s,a;
  
  printf("Enter the values of a triangle's length i.e. x,y,z");
  scanf("%f %f %f",&x,&y,&z);
  s=(x+y+z)/2;
  a=sqrt((s*(s-x)*(s-y)*(s-z)));
  printf("The area of triangle is %f",a);
  return 0;
}