#include <stdio.h>

int main()
{
   int i, counter2 =0, counter1 = 0, total;

   for (i = 1; i < 10000; i++)
   {
      if (i % 3 == 0 || i % 5 == 0)
      {
         counter1++;
      }
   }
      printf("Total value which Devided by 3 OR 5 is %d\n", counter1);


   for (i = 1; i < 1000; i++)
   {
      if (i % 3 == 0 && i % 5 == 0)
      {
         counter2++;
      }
   }

   printf("Total value which devided by 3 AND 5 is %d\n", counter2);

   return 0;
}