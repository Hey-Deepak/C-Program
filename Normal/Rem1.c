/*
 ============================================================================
 Name        :
 Author      : Deepak Choudhary
 Description : 
 ============================================================================
 */

#include<stdio.h>
int main(){
    int k,b,j,n,i,l;
    
    printf("Enter how many steps you want to print\n");
    scanf("%d",&n);

    for (i = 1; i <= n; i++){ 
            
        for (j = 1; j <= n-i; j++)
            printf(" ");

        for (k = 1; k <=i; k++)
            printf("%d",k);

        for (b = k; b<=i; b--)
            printf("%d",b);
        
        printf("\n");  
    }   

        for (i = 1; i <= n; i++){ 
        
        for (j = 2; j <= i; j++)
            printf(" ");

        for (k = 1; k <= n-i; k++)
            printf("%d",k);
       
        for ( l = 1; l <= n-i; l++)
            printf("%d",l);
        printf("\n");  
    } 

    return 0;
}