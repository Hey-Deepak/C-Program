#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter 2 values :\n");
    scanf("%d %d", &a, &b);
    while (b!=0)
    {
        a++;
        b--;
    }
    printf("%d", a);
    return 0;
}


