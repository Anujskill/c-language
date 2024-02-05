#include <stdio.h>
int main()
{
	char n='A';
	int i=1;
	
	while(i<=5)
	{
		int j=1;
		while(j<=i)
		{
			if(j%2!=0){
				printf("%c ",n+32);
				n++;
			}
			else{
				printf("%c ",n++);
			}
			j++;
		}
		printf("\n");
		i++;
	}
	
	return 0;
	
}