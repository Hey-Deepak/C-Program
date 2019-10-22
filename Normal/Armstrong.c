/*
 ============================================================================
 Name        : Armstrong Number
 Author      : Deepak Choudhary
 Description : abcd... == a^n + b^n + c^n + d^n ...
 ============================================================================
 */

#include<stdio.h>
#include<math.h>

int isArmstrongNo(int N){
    int count=0, digits[20], i, sum=0, Ncopy = N;
    while(N>0){
        digits[count] = N%10;
        N/=10;
        ++count;
    }
    for(i=0 ; i<count ; i++)
        sum += pow(digits[i], count);
    return sum==Ncopy;
}

int main()
{  
    int x;
    printf("Enter a number: \n\a");
    scanf("%d", &x);
    printf("%d %s a Armstrong number", x, isArmstrongNo(x)==0 ? "is not" : "is");

    return 0;  
}