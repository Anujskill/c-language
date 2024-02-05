#include <stdio.h>

int g1=60;
int g2=70;
int g3=80;

void percent()
{
	int total=g1+g2+g3;
	int percentange=total*100/300;
	
	printf("Total marks obtained is :- %d\n",total);
	printf("Percentange obtained is :- %d",percentange);
	
}

void percent2()
{
	int sub1=60;
	int sub2=70;
	int sub3=80;
	int total=sub1+sub2+sub3;
	int percentange=total*100/300;
	
	printf("Total marks obtained is :- %d\n",total);
	printf("Percentange obtained is :- %d",percentange);
	
}

int main()
{
	percent2();
	return 0;
}