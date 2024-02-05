#include <stdio.h>

int main()
{
	int i,j,n,sum;

	printf("Enter the value of n :- ");
	scanf("%d",&n);
	
	for(i=1,j=1;i<=n;i++,j*=2){
		
		sum=j*i;
		printf("%d\n",sum);
		
	}

	return 0;
	
}