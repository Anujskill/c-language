#include <stdio.h>
int  main()
{	
	int number[2][2];
	
	for(int i=0;i<2;i++)
	{
		for(int j=0; j<2; j++)
		{
			printf("Enter the elements[%d][%d] :- ",i,j);
			scanf("%d",&number[i][j]);
		}
	}
	
	for(int i=0;i<2;i++)
	{
		for(int j=0; j<2; j++)
		{
			printf("The elements is:- %d\n",number[i][j]);
		}
	}
	
	printf("\n");
	printf("Spare Matrix \n");
	for(int i=0;i<2;i++)
	{
		for(int j=0; j<2; j++)
		{
			printf("%d ",number[i][j]);
		}
		printf("\n");
	}
	
	return 0;
	
}