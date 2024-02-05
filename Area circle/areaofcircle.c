#include <stdio.h>

int main ()
{
	float pie=3.14;
	float radius;
	float area;
	
	printf("Enter the value of radius :- ");
	scanf("%f",&radius);
	
	area = pie*radius*radius;
	printf("Area of circle is :- %f",area);
	
	return 0;
	
}