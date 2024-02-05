#include <stdio.h>

int main()
{
	int i=1,j=1,n,sum=1;
	
	printf("Enter the value of n:- ");
	scanf("%d",&n);

	while(i<=n)
	{
		printf("%d\n",sum);
		i++;
		j*=2;
		sum=i*j;
	}

	return 0;
	
}