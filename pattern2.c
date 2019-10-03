#include<stdio.h>
int main(){
    int k,j,n,i,l;
    
    printf("Enter how many steps you want to print\n");
    scanf("%d",&n);

    for (i = 1; i <= n; i++){ 
      //  printf("%d", i);    
        for (j = 2; j <= i; j++)
            printf(" ");

        for (k = 0; k <= n-i; k++)
            printf("*");
       
        for ( l = 1; l <= n-i; l++)
            printf("*");
        printf("\n");  
    }   

    return 0;
}