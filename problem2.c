#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main(void){
 
        int day;
        int month;
        int year;
 
        puts("Enter a date");
        scanf("%d%*c%d%*c%d",&day, &month, &year);
 
        printf("Day is: %d\nMonth is: %d\nYear is %d\n", day, month, year);
    
    return 0;
}
