#include<stdio.h>
void swap(int *x, int *y)
{ 
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("After Swapping \n");
    printf("a value is %d \nb value is %d \n", *x, *y);

}

int main()
{
    int a,b;
    
    printf("Enter the value of a and b:- \n" );
    scanf("%d %d", &a, &b);
    printf("Before Swapping \n");
    printf("a value is %d \nb value is %d \n", a, b);
    swap(&a, &b);
    
    return 0;  
}