#include <stdio.h>

int g1=70;
int g2=80;
int g3=85;

int simpleinterest(int a,int b,int c)
{
	int interest=a*b*c/100;
	
	return interest;
	
}

int marks(int sub1,int sub2,int sub3)
{
	int total=sub1+sub2+sub3;
	int percentage=total*100/300;
	printf("Total marks obtained is %d\n",total);
	
	return percentage;
}

int globalmarks(int g1,int g2,int g3)
{
	int total=g1+g2+g3;
	int percentage=total*100/300;
	printf("Total marks obtained is %d\n",total);
	return percentage;
}

int main()
{	
	int percentage=globalmarks(g1,g2,g3);
	printf("Percentage obtained is %d\n",percentage);
	
	return 0;
}





