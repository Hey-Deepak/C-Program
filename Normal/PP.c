#include<stdio.h>
void a(){
    static int x=9;
}
int main()
{
    printf("%d \n", a);
    return 0;  
}