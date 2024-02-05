#include <stdio.h>

int main()
{
	/*char i='A',j='a';

	while(i<='Z')
	{
		printf("%c - %c\n",i,j);
		i++;
		j++;
	}*/
	
	char i='A';

	while(i<='Z')
	{
		printf("%c - %c\n",i,i+32);
		i++;
	}

	return 0;
	
}