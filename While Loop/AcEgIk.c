#include <stdio.h>

int main()
{
	char i='A';

	while(i<='Z')
	{
		if(i%4==!0){
			printf("%c\n",i);
		}
		else if(i%2==!0){
			printf("%c\n",i+32);
		}
		i++;
	}

	return 0;
	
}