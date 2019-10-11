/*
 ============================================================================
 Name        :
 Author      : Deepak Choudhary
 Description : 
 ============================================================================
 */


#include<stdio.h>

int main()
{   int a, b, i, count;
    printf("Enter any Number\n");
    scanf("%d", &a);
    printf("How much Number you want to print\n");
    scanf("%d", &count);
    for ( i = 1; i <= count; i++)
    {   
        b = a * i;
        printf("%d * %d = %d\n", a, i, b);
    }
    return 0;
}