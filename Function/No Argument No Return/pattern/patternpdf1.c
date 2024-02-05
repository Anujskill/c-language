#include <stdio.h>

void pattern1()
{	
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}

void pattern2()
{	
	int i,j;
	
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}

void pattern3()
{	
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}

void pattern4()
{	
	char i,j;
	
	for(i='A';i<='E';i++)
	{
		for(j='A';j<='E';j++)
		{
			printf("%c ",i);
		}
		printf("\n");
	}
}

void pattern5()
{	
	int i,j;
	
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i%2==0){
			printf("%d\t",i);
			}
		}
		printf("\n");
	}
}

void pattern6()
{	
	int i,j;
	
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i%2!=0){
			printf("%d\t",i);
			}
		}
		printf("\n");
	}
}

void pattern7()
{	
	int i,j,n=1;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d\t",n++);
		}
		printf("\n");
	}
}

void pattern8()
{	
	int i,j;
	char n='A';
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%c ",n++);
		}
		printf("\n");
	}
}

void pattern9()
{	
	int i,j,n=11;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d ",n++);
		}
		n+=5;
		printf("\n");
	}
}

int main ()
{
	pattern9();
	
	return 0;
}