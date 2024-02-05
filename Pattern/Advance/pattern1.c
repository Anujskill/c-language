#include <stdio.h>

int main()
{
	int i,j,k,a,b,c;
	for(i=1;i<=7;i++){
		for(j=1;j<=7-i;j++)
		{
			printf("* ");
		}
		for(k=1;k<=i;k++)
		{
			printf(" ");
		}
		for(a=11;a>=8-i;a--)
		{
			printf("* ");
		}
		printf("\n");	
	}

	
	
	return 0;
	
}

