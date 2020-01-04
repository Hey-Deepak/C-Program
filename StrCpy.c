#include<stdio.h>
strcpy(char* s, char* t);
int main()
{  
  char s[2], t[2] = {'a', 'c', 'd'};
  strcpy(s, t);
  printf("%c", s[1]);
  return 0;  
}
strcpy(char* s, char* t){
  while((*s++ = *t++) != '\0');
};
