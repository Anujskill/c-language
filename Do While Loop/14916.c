#include <stdio.h>

int  main()
{
	int i=1,sum=0,n;
	
	printf("Enter the value of n :- ");
	scanf("%d",&n);
	
	do{
		sum=i*i; 
		printf("%d\n",sum);		
		i++;
	}
	
	while(i<=n);
	
	
	return 0;
	
}