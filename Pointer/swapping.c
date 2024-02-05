#include <stdio.h>

int main()
{	
	int a=10,b=20,c;
	int *p1=&a;
	int *p2=&b;
	int *p3=&c;
	
	printf("Value\n");
	printf("Value of a is %d\n",a);
	printf("Value of b is %d\n\n",b);
	
	printf("Address\n");
	printf("Address of a is %p\n",p1);
	printf("Address of b is %p\n",p2);
	printf("Address of c is %p\n\n",p3);
	
	*p3=*p1;
	*p1=*p2;
	*p2=*p3;
	
	printf("Swapped value\n");
	printf("Swapped value of a is %d\n",*p1);
	printf("Swapped value of b is %d\n",*p2);
	
	
	return 0;
	
}