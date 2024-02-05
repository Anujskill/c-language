#include <stdio.h>
int  main()
{	
	int odd=0,even=0,sum=0,arr[5];
	
	for(int i=0;i<5;i++)
	{
		printf("Enter the elements of array %d :- ",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++)
	{
		if(arr[i]%2==0){
			even+=arr[i];
		}
		else{
			odd+=arr[i];
		}
	}
	
	printf("Sum of odd position is %d.\n",odd);
	printf("Sum of even position is %d.",even);
	
	return 0;
	
}