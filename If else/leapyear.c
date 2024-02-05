#include <stdio.h>

int main()
{
	int year;
	
	printf("Enter the year :- ");
	scanf("%d",&year);
	
	if(year%4==0){
		printf("The Year is a leap year.");
	}
	else{
		printf("The Year is not a leap year.");
	}

	return 0;
	
}