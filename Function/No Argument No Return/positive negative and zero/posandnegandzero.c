#include <stdio.h>

void posandnegandzero()
{
	int a;
	
	printf("Enter the value of a:- ");
	scanf("%d",&a);
	
	if(a<0)
	{
		printf("Value of a is negative.");
	}
	else{
		if(a==0){
			printf("Value of a is zero.");
		}
		else{
			printf("Value of a is positive.");
		}
	}
}

int main()
{
	posandnegandzero();
	
	return 0;
}