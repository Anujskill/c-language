#include <stdio.h>

int main ()
{
	int lenght;
	int width;
	int area;
	
	printf("Enter the value of lenght :- ");
	scanf("%d",&lenght);
	printf("Enter the value of width :- ");
	scanf("%d",&width);
	
	area = lenght*width;
	printf("Area of rectangle is :- %d",area);
	
	return 0;
	
}