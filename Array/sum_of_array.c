#include <stdio.h>
int  main()
{	
	int sum=0,arr[5];
	
	for(int i=0;i<5;i++)
	{
		printf("Enter the elements of array %d :- ",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++)
	{a
		sum+=arr[i];
	}
	
	printf("Sum of array is %d.",sum);
	
	return 0;
	
}