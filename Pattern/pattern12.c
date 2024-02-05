#include <stdio.h>
int main()
{
	char i,j;
	
	for(i=66;i<='F';i++){
		for(j=i;j>=66;j--){			
			printf("%c ",j-1);
		}
	
		printf("\n");
	}
	
	return 0;
	
}