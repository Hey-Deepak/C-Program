#include <stdio.h>
int main()
{
    int n, arr[100], i, sum = 0;

    printf("Enter the size of the array");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("Sum of the array numbers is %d", sum);
    return 0;
}