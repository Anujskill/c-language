#include <stdio.h>

int main()
{
	int i=1,n;
	
	printf("Enter the value of n:- ");
	scanf("%d",&n);

	while(i<=n)
	{
		if(i%2==0){
		printf("%d\n",i*i);
		}
		else{
		printf("%d\n",i);
		}
		i++;
	}

	return 0;
	
}