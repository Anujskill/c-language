#include <stdio.h>

int g1=70;
int g2=80;
int g3=85;

void simpleinterest(int a,int b,int c)
{
	int interest;
	
	printf("Enter the value of a:- ");
	scanf("%d",&a);
	printf("Enter the value of b:- ");
	scanf("%d",&b);
	printf("Enter the value of c:- ");
	scanf("%d",&c);
	
	interest=a*b*c/100;
	printf("Simple Interest is %d",interest);
}

void marks(int sub1,int sub2,int sub3)
{
	int total=sub1+sub2+sub3;
	int percentage=total*100/300;
	printf("Total marks obtained is %d\n",total);
	printf("Percentage obtained is %d\n",percentage);
}

void globalmarks(int g1,int g2,int g3)
{
	int total=g1+g2+g3;
	int percentage=total*100/300;
	printf("Total marks obtained is %d\n",total);
	printf("Percentage obtained is %d\n",percentage);
}

int main()
{
	globalmarks(g1,g2,g3);
	
	return 0;
}