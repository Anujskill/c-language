#include <stdio.h>

int main(){

	int i;
	int n;
	
	printf("Enter the value :- ");
	scanf("%d",&n);
	
	for(i=-n;i<=n;i++){
		
		printf("%d\n",i);
	}

	return 0;
	
}