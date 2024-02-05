#include <stdio.h>

int main ()
{
	int base;
	int height;
	int area;
	
	printf("Enter the value of base :- ");
	scanf("%d",&base);
	printf("Enter the value of height :- ");
	scanf("%d",&height);
	
	area = base*height/2;
	printf("Area of triangle is :- %d",area);
	
	return 0;
	
}