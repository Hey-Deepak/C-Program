#include<stdio.h>
int main()
{
    int a[100];
    int *ptra = a;
    printf("Enter Value of a :- \n");
    scanf("%d", &a);
    printf("Value of a(a[0]) is %d\n", a[0]);
    printf("Address of a(&a) is %d\n", &a);
    printf("Address of ptra is %d\n", ptra);
    printf("Value of ptra(*ptra) is %d\n", *ptra);
    printf("Address of a[1] is %d\n", &a[1]);
    printf("Value of a[1] is %d\n", a[1]);
   
    (*ptra)++;                            // (*ptra)++  vs  *ptra++ /  ptra++
    printf("\nAfter Increment :-\n\n");
    
    printf("Value of a is %d\n", a[0]);
    printf("Address of a is %d\n", &a);
    printf("Address of ptra is %d\n", ptra);
    printf("Value of ptra(*ptra) is %d\n", *ptra);
    printf("Address of a[1] is %d\n", &a[1]);
    printf("Value of a[1] is %d\n", a[1]);
    

    return 0;
}
