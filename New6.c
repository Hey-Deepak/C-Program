#include<stdio.h>
#include<string.h>
int main()
{   int i, n, m;
    char a[20];
    printf("How Much Length you want to print: \n");
    scanf("%d %*c %d", &n, &m);
    printf("%d %d", n , m);
    /* scanf("%c");
    for(i=0 ; i<n ; i++)
    {   scanf("%c", &a[i]);
        if(a[i] == 10)
            break;
    }
    a[i+1] = NULL;
    printf("%s", a); */
    return 0;
}