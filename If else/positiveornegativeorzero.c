#include <stdio.h>

int main()
{
	int a;
	
	printf("Enter the value of a :- ");
	scanf("%d",&a);
	
	if(a>0){
		printf("The value is positive.");
	}
	else if(a<0){
		printf("The value is negative.");
	}
	else{
		printf("The value is zero.");
	}

	return 0;
	
}