#include<stdio.h>
int fab(int n){
       
    for (int i = 0; i < n; i++)
    {   
       
        int a =0, b = 1, count = 0;
        count = (a + b);
        printf("%d, \n", count);
        a = b;
        b = count;
        return 0;
    }
    
    };
    
    int main(){
    
    int n;
    printf("Fibonacci Series = \n");
    scanf("%d", &n);
    
    fab(n);
    

    return 0;
}