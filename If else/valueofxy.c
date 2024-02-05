#include <stdio.h>

int main()
{
	int x,y;
	
	printf("Enter the value of x :- ");
	scanf("%d",&x);
	printf("Enter the value of y :- ");
	scanf("%d",&y);
	
	if(x<=2000||x>=3000){
		printf("The value of x is :- %d\n",x);
	}
	else{
		printf("Value of x is invalid.\n");	
	}
	if(y>=100&&y<=500){
		printf("The value of y is :- %d\n",y);
	}
	else{
		printf("Value of y is invalid.");	
	}

	return 0;
	
}