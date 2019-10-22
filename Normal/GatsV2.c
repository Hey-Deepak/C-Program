#include<stdio.h>
int main()
{
    char c;
   
    while ((c = getchar()) != EOF && c!= 10)
    {
        putchar(c);
    }
    return 0;  
}