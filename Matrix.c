#include<stdio.h>
int main()
{   
    int m, n, i, j;
    int arr[20][20];

    printf("Enter the Number of Rows:-\n ");
    scanf("%d", &m);
    printf("Enter the Number of Column:-\n ");
    scanf("%d", &n);
    printf("Enter the Elements :-\n");
    
    for(i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Matrix :- \n");

    for(i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    } 
    return 0;
}
