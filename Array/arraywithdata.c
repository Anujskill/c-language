#include <stdio.h>
int main()
{
	int number[5];
	
	for(int i=0;i<5;i++)
	{
		printf("Enter the value of first array %d :- ",i);
		scanf("%d",&number[i]);
	}
	
	for(int i=0;i<5;i++)
	{	
		printf("\nThe value of first array %d :- %d",i,number[i]);
	}
	
		printf("\n");
	
	for(int j=0;j<5;j++)
	{
		printf("Enter the value of second array %d :- ",j);
		scanf("%d",&number[j]);
	}
	
	for(int j=0;j<5;j++)
	{	
		printf("\nThe value of second array %d :- %d",j,number[j]);
	}
	
	return 0;
	
}