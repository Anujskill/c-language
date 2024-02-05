#include <stdio.h>

int sum(int a,int b)
{
	int total=a+b;
	return total;
}

int main()
{
	int total=sum(20,30);
	
	printf("Total is :- %d\n",total);	
	
	return 0;
}