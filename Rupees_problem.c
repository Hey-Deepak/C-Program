#include<stdio.h>
#include<conio.h>
void main()
{
  int r,p;
  float m;
  printf("Enter ur money");
  scanf("%f",&m);
  r=m;
  p=(m-r)*100;
  printf("rupees:%d\n",r);
  printf("paise:%d",p);
  getch();
}
