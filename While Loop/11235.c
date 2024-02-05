#include <stdio.h>

int main()
{
	int i=1,t1=0,t2=1,n,sum=1;
	
	printf("Enter the value of n:- ");
	scanf("%d",&n);

	while(i<=n)
	{
		printf("%d\n",sum);
		i++;
		t1=t2;
		t2=sum;
		sum=t1+t2;
	}

	return 0;
	
}