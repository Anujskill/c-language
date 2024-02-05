#include <stdio.h>
int main()
{
	char i='A',n='A';
	
	while(i<='E')
	{
		char j='A';
		while(j<='E')
		{
			printf("%c ",n++);
			j++;
		}
		printf("\n");
		i++;
	}
	
	return 0;
	
}