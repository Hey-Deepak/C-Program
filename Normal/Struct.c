#include<stdio.h>
int main(){
    struct exp
    {
        int a ;
        char b ;
    };
    struct exp abc;
    abc.a = 20;
    abc.b = 'b';
    printf("%d \n", abc.a);
    printf("%c \n", abc.b);
    return 0;
}