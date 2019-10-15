#include<iostream>
using namespace std;

int factorial(int number)
{
	if (number == 1 || number == 0)
    {
        return 1;
    }
	else
	    return (factorial(number-1)*number);
}
int main(void)
{
	int number,y;
	
	cout<<"enter number :- ";
	cin>>number;
	y=factorial(number);
	
	printf("%d's Factorial is %d\n",number ,y);
	
	return 0;
}