#include <stdio.h>

int main ()
{
	int side;
	int area;
	
	printf("Enter the value of side :- ");
	scanf("%d",&side);
	
	area = side*side;
	printf("Area of square is :- %d",area);
	
	return 0;
	
}