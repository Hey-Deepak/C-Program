#include<stdio.h>
int main()
{
    
    printf("%d\n",sizeof(int)>-1);
    if (sizeof(int)>-1)
    {
        printf("True \n");
    }
    else
    {
        printf("False \n");
    }
    
    
    return 0;  
}