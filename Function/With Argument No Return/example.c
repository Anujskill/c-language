#include <stdio.h>

void sum(int a,int b)
{
	int total=a+b;;
	
	printf("Total is :- %d\n",total);
}

int main()
{
	sum(60,60);
	
	int a=30;
	int b=20;
	sum(a,b);
	
	return 0;
}