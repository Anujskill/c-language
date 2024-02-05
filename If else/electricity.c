#include <stdio.h>

int main()
{
	float units;
	float consumption;
	float surcharge;
	float total;
	
	printf("Enter the units :- ");
	scanf("%f",&units);
	
	if(units<=100){
		consumption=units*0.6;
		printf("The consumption of units is :- %f\n",consumption);
	}
	else if(units<300){
		consumption=units*0.8;
		printf("The consumption of units is :- %f\n",consumption);
	}
	else{
		consumption=units*0.9;
		printf("The consumption of units is :- %f\n",consumption);
	}
	
	surcharge=consumption+50;
	printf("Total charges is :- %f\n",surcharge);
	
	if(surcharge>300){
		total=surcharge*15/100;
		printf("Total surcharges is :- %f",surcharge+total);
	}
	
	return 0;
	
}