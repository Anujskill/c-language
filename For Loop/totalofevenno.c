#include <stdio.h>

int main(){

	int i;
	int n;
	int total=0;
	
	printf("Enter the value :- ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if(i%2==0){
			total += i;
		}
	}
	
	printf("Total is :- %d\n",total);

	return 0;

}