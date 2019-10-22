#include<stdio.h>
#include<string.h>
int main()
{
    int n, i;
    char a[100];
    
    printf("How Much Length you want to print: \n");
    scanf("%d", &n);
    //scanf("%c", &n);
   
    for (i = 0;i < n+1; i++)
    {    
        scanf("%c", &a[i]);
    }
   
    a[i] = '\0';
   
    for (i = 1;i < a[i]!='\0'; i++)
    {  
        printf("%c", a[i]);
    }
    
    return 0;
}