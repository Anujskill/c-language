#include <stdio.h>
int  main()
{	
	int total=0,arr[3][3];
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		printf("Enter the elements of array :- ");
		scanf("%d",&arr[i][j]);
		}
	}

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			total+=arr[i][j];
		}
	}
	
	printf("Sum of two array is %d.",total);
	
	return 0;
	
}