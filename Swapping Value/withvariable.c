#include <stdio.h>

int main()
{
	int a=10,b=20,c;
	
	printf("Value of a:- %d\n",a);
	printf("Value of b:- %d\n",b);
	
	c=a;
	a=b;
	b=c;
	printf("Swapped value of a:- %d\n",a);
	printf("Swapped value of b:- %d\n",b);

	return 0;
	
}