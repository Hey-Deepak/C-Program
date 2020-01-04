#include<stdio.h>
strcat(char* s, char* t);
int main()
{  
  char s[] = {'a', 'c', 'd'}, t[] = {'a', 'c', 'd'};
  strcpy(s, t);
  printf("%c\n", s[6]);
  return 0;  
}
strcat(char* s, char* t){
  while(*s++ != '\0');
  while((*s++ = *t++) != '\0');
};
