#include <stdio.h>

int main()
{
	int a;
	
	printf("Enter value of a:- ");
	scanf("%d",&a);
	
	if(a%5==0&&a%3==0){
		printf("Yes the value is divisible by 5 and 3.");
	}
	else{
		printf("No the value is not divisible by 5 and 3.");
	}

	return 0;
	
}