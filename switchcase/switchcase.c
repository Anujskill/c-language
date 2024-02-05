#include<stdio.h>

int main(){
	
	int a;
	
	printf("enter the value :");
	scanf("%d",&a);
	
	switch(a){
		case 1:
		printf("Monday");
		break;
		case 2:
		printf("tuesday");
		break;
		case 3:
		printf("wednesday");
		break;
		case 4:
		printf("thursday");
		break;
		case 5:
		printf("friday");
		break;
		case 6:
		printf("saturdey");
		break;
		case 7:
		printf("sunday");
		break;
		
		default:
		printf("this is not value 1 to 7 number");
		
	}
	
}