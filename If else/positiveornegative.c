#include <stdio.h>

int main()
{
	int a;
	
	printf("Enter value of a:- ");
	scanf("%d",&a);
	
	if(a<0){
		printf("The value is Negative.");
	}
	else{
		printf("The value is Positive.");
	}

	return 0;
	
}