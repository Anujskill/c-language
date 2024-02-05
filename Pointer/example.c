#include <stdio.h>

int main()
{	
	int a=10,b=20;
	int* c=&a;
	
	printf("Value of a is %d\n",a);
	printf("Address of a is %p\n",&a);
	printf("Value of c is %p\n",c);
	printf("Address of c is %p\n",&c);
	
	return 0;
	
}