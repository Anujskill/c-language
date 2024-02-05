#include <stdio.h>

int  main()
{
	char i='A';
	int n;
	
	printf("Enter the value of n :- ");
	scanf("%d",&n);
	
	do{
		if(i%2!=0){
			printf("%c\n",i);
		}
		i++;
	}
	
	while(i<=n);
	
	
	return 0;
	
}