#include <stdio.h>

int main()
{
	int a=30,b=40;
	
	printf("Value of a:- %d\n",a);
	printf("Value of b:- %d\n",b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Swapped value of a:- %d\n",a);
	printf("Swapped value of b:- %d\n",b);

	return 0;
	
}