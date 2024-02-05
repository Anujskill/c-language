#include <stdio.h>

int main()
{
	float salary,hra,da;
	
	printf("Enter the salary :- ");
	scanf("%f",&salary);
	
	if(salary<5000){
		hra=salary*8/100;
		da=salary*20/100;
		printf("Gross Salary is :- %f",salary+hra+da);
	}
	else if(salary<10000){
		hra=salary*12/100;
		da=salary*30/100;
		printf("Gross Salary is :- %f",salary+hra+da);
	}
	else if(salary<15000){
		hra=salary*15/100;
		da=salary*40/100;
		printf("Gross Salary is :- %f",salary+hra+da);
	}
	else{
		hra=salary*20/100;
		da=salary*50/100;
		printf("Gross Salary is :- %f",salary+hra+da);
	}
	
	return 0;
	
}