#include <stdio.h>

int  main()
{
	int i=1,total=0,n;
	
	printf("Enter the value of n :- ");
	scanf("%d",&n);
	
	do{
		if(i%2==0){
			total+=i; 
		}
		i++;
	}
	
	while(i<=n);
	printf("%d\n",total);
	
	return 0;
	
}