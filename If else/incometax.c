#include <stdio.h>

int main()
{
	float rate,tax;
	
	printf("Enter the rate :- ");
	scanf("%f",&rate);
	
	if(rate<2500){
		printf("Total of Income tax slab is :- %f",rate);
	}
	else if(rate <5000){
		tax=rate*10/100;
		printf("Total of Income tax slab is :- %f",rate+tax);
	}
	else if(rate<10000){
		tax=rate*20/100;
		printf("Total of Income tax slab is :- %f",rate+tax);
	}
	else{
		tax=rate*30/100;
		printf("Total of Income tax slab is :- %f",rate+tax);
	}
	
	return 0;
	
}