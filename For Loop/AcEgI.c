#include <stdio.h>

int main()
{
	int i,j;
	
	/*for(i=99,j=65;i<=122;i++,j++){
		
		if(i%2==!0&&j%2==!0){
			
			printf("%c %c\n",j,i);
		}
		
		
	}*/
	
	for(i=65;i<=122;i++){
		
		if(i%2==!0){
			j=i-34;
			printf("%c %c\n",j,i);
		}
		
		
	}

	return 0;
	
}	