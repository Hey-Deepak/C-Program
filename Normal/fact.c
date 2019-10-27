#include<stdio.h>
int fact(int n){
    
    if (!n)
    {   
        return 1;
    }
    //printf("%d", n);
    return n*fact(n-1);

    
}
int main()
{
    printf("%d",fact(11) );
    
    return 0;  
}