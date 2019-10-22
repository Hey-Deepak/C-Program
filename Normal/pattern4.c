#include <stdio.h>
int main()
{
    int k, j, n, i, l;

    printf("Enter how many steps you want to print\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}