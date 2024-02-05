#include <stdio.h>
int main()
{
	char i,j;
	
	for(i='A',j='a';i<='Z';i++,j++){
		printf("%c - %c\n",i,j);
	}
	
	return 0;
	
}