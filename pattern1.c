#include<stdio.h>
int main(){
    int k,j,n,i,l;
    
    printf("Enter how many steps you want to print\n");
    scanf("%d",&n);

    for ( i = 1; i <= 5; i++){ 
        
        for (k = 1; k <= 5-i; k++)
            printf(" ");
        for ( j = 1; j <= i; j++)
            printf("*");
        for ( l = 1; l <= i-1; l++)
            printf("*");
        printf("\n");  


        
    }

    return 0;
}