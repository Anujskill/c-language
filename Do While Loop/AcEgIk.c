#include <stdio.h>

int  main()
{
	int i=65,n;
	
	printf("Enter the value of n :- ");
	scanf("%d",&n);
	
	do{
		if(i%4==1){
			printf("%c\n",i);
		}
		else if(i%2==1){
			printf("%c\n",i+32);
		}
		i++;
	}
	
	while(i<=n);
	
	
	return 0;
	
}