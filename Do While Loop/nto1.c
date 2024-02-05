#include <stdio.h>

int  main()
{
	int n;
	
	printf("Enter the value of n :- ");
	scanf("%d",&n);
	
	int i=n;
	
	do{
		printf("%d\n",i);
		i--;
	}
	while(i>=1);
	
	return 0;
	
}