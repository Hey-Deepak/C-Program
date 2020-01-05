#include<stdio.h>
int countFunction();
int main(){
    countFunction();
    countFunction();
    countFunction();
    printf("%d", countFunction());
    return 0;
}
int countFunction(){
    static int count;
    return ++count;
};
