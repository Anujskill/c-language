#include <stdio.h>

int main ()
{
	int a;
	int b;
	int c;
	int total=0;
	float interest;
	
	printf("Enter the value of a :- ");
	scanf("%d",&a);
	printf("Enter the value of b :- ");
	scanf("%d",&b);
	printf("Enter the value of c :- ");
	scanf("%d",&c);
	
	total = a+b+c;
	printf("Total :- %d\n",total);
	
	interest=total/100;
	printf("Simple interest is :- %f",interest);
	
	return 0;
	
}