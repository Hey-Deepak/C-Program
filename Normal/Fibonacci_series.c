#include<stdio.h>
int main(){
    int a=0,b=1,n,i,count=0;

    printf("Enter Number of steps you want to Print: \n ");
    scanf("%d", &n);
    
    for ( i = 0; i < n; i++)
    {
        count  = a + b;
        printf("%d\n", count);
        a = b;
        b = count;
    }
    return 0;
}
        
