#include <stdio.h>

int main()
{
	char i='A';

	while(i<='Z')
	{
		if(i%2==!0){
			printf("%c\n",i);
		}
		i++;
	}

	return 0;
	
}