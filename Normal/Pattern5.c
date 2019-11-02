#include<stdio.h>
int main()
{
    int i, n, j;
    scanf("%d", &n);

    for ( i = 1; i < n; i++)
    {
        for ( j = 1; j < n; j++)
        {   
            if ( (i == j) && (j < (n/2)))
            {
                printf("%d", n-j);
            }
            else if ( (i == j ) && (j >= (n/2)))
            {
                printf("%d", j);
            }
            else if ( (j == n - i ) && (j < (n/2)))
            {
                printf("%d", n - i);
            }
            else if ( (j == n - i ) && (j >= (n/2)))
            {
                printf("%d", n - j );
            }
            else
            {
                printf(" ");
            }  
         } printf("\n");
    }
    return 0;
}