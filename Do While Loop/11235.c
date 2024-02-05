#include <stdio.h>

int  main()
{
	int i=1,t1=0,t2=1,sum=0,n;
	
	printf("Enter the value of n :- ");
	scanf("%d",&n);
	
	do{
		printf("%d\n",sum);	
		t1=t2;
		t2=sum;
		sum=t1+t2;
		i++;
	}
	
	while(i<=n);
	
	
	return 0;
	
}