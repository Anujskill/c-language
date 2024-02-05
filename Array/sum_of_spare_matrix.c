#include <stdio.h>
int  main()
{	
	int number[3][3],dia=0,upper=0,lower=0;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("Enter the elements[%d][%d] :- ",i,j);
			scanf("%d",&number[i][j]);
		}
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("The elements is:- %d\n",number[i][j]);
		}
	}
	
	printf("\n");
	printf("Spare Matrix \n");
	for(int i=0;i<3;i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d ",number[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0; j<3; j++)
		{
			if(number[i]==number[j]){
				dia+=number[i][j];
				
			}
			if(number[i]<number[j]){
				upper+=number[i][j];	
			}
			if(number[i]>number[j]){
				lower+=number[i][j];			
			}
		}
	}
	
	printf("The total of Diagonal elements is %d.\n",dia);
	printf("The total of Upper elements is %d.\n",upper);
	printf("The total of Lower elements is %d.\n",lower);
	
	return 0;
	
}