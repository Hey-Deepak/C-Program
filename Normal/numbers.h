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

int getNoOfDigits(int N){
    int count=0;
    while(N>0){
        N/=10;
        ++count;
    }
    return count;
}