#include <stdio.h>
int main()
{
	char i='A';
	
	while(i<='E')
	{
		char j='A';
		while(j<='E')
		{
			printf("%c ",i);
			j++;
		}
		printf("\n");
		i++;
	}
	
	return 0;
	
}