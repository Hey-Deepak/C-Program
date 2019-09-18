/*
 ============================================================================
 Name        :Hello world
 Author      : Deepak Choudhary
 Description : In this program, I observed how comma operators work in parentheses.
 
 
In general, associativity of the comma operator is Left to Right but when we face parentheses it works Differently.
In Parentheses it will take Right most value and print it.  
 ============================================================================
 */


#include <stdio.h>
int main() 
{	
	int x = (1, 2, 3, 4, 5);
	printf("%d",x);
	
	return 0;
}
