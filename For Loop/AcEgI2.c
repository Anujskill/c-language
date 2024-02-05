#include <stdio.h>
int main()
{
	int i,n;
	printf("Enter the value of n :- ");
	scanf("%d",&n);
	
	for(i=65;i<=n;i++){
		if(i%4==!0)
		{
		printf("%c\n",i);
		}
		else if(i%2==!0)
		{
			printf("%c\n",i+32);
		}
		
		
	}
	
	return 0;
	
}