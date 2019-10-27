#include<stdio.h>
void fab(int n)
{
    int a = 0, b = 1, count = 0;
    for (int i = 0; i < n; i++)
    {   
       
        count = (a + b);
        printf("%d,", count);
        a = b;
        b = count;
    }
    };
    int main()
{
    int n;
    printf("Fibonacci Series = \n");
    scanf("%d", &n);
    fab(n);
    return 0;
}