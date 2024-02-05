#include <stdio.h>

int  main()
{
	char i='A',j='a';
	
	do{
		printf("%c - %c\n",i,j);
		i++;
		j++;
	}
	while(i<='Z');
	
	return 0;
	
}