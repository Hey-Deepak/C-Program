#include<stdio.h>
swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = x;
    return 

}

int main()
{
    int a,b;
    
    printf("Enter the value of a and b:- \n" );
    scanf("%d %d", &a, &b);
    printf("Before Swapping \n");
    printf("a value is %d \nb value is %d \n", a, b);
    swap(printf("a value is %d \nb value is %d \n", a, b);a, b);
    printf("After Swapping \n");
    printf("a value is %d \nb value is %d \n", a, b);
    return 0;  
}