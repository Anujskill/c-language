#include <stdio.h>

int main()
{
	int age;
	
	printf("Enter the age :- ");
	scanf("%d",&age);
	
	if(age<18){
		if(age<=0){
			printf("Please enter valid age.");
		}
		else{
			printf("Person is not eligible for vote.");
		}
	}
	else{
		printf("Person is eligible for vote.");
	}
	
	return 0;
	
}