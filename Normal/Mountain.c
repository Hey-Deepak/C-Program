#include<stdio.h>
int main()
{
    for(int i=1;i<=10;i++)
    {
        for(int j=i;j<=9;j++)
        {
            printf(" ");
        }      
           
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }

        for(int l=2;l<=i;l++)
        {
            printf("*");
        
        }
        for(int a=i;a<=9;a++)
        {
            printf(" ");
        }for(int d=i;d<=9;d++)
        {
            printf(" ");
        }
        for(int b=1;b<=i;b++)
        {
            printf("*");
        }
        for(int c=2;c<=i;c++)
        {
            printf("*");
        }
        printf("\n");
    }  
    return 0;     
}