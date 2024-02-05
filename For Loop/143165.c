#include <stdio.h>

int main()
{
	int i,n,odd,even;

	printf("Enter the value of n :- ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if(i%2==!0){
			printf("%d\n",i);
		}
		else{
			printf("%d\n",(i*i));
		}
		
		
		
	}

	return 0;
	
}	