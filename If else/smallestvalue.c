#include <stdio.h>

int main()
{
	int a,b;
	
	printf("Enter value of a:- ");
	scanf("%d",&a);
	printf("Enter value of b:- ");
	scanf("%d",&b);
	
	if(a<b){
		printf("Smallest value is :- %d",a);
	}
	else{
		printf("Smallest value is :- %d",b);
	}

	return 0;
	
}