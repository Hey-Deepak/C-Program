#include<stdio.h>
char * myGets(char s[]){
    int i=0;
    for(i=0 ; i<100 ; i++){
        scanf("%c", &s[i]);    
        if(s[i] == 10)
            break;
    }
    s[i] = '\0';
    return s;
}
int main(){
    char s[100];
    printf("%s", myGets(s));   
}