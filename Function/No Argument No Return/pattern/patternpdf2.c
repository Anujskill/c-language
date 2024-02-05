#include <stdio.h>

void pattern1()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}

void pattern2()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}

void pattern3()
{
	int i,j;
	
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}

void pattern4()
{
	int i,j,n=1;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",n++);
		}
		printf("\n");
	}
}

void pattern5()
{
	int i,j;
	
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}

void pattern6()
{
	char i,j;
	
	for(i='A';i<='E';i++)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}

void pattern7()
{
	char n='A';
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0){
				printf("%c ",n+32);
				n++;
			}
			else
			{
				printf("%c ",n++);
			}
		}
		printf("\n");
	}
}

void pattern8()
{
	char n='A';
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2!=0){
				printf("%c ",n+32);
				n++;
			}
			else
			{
				printf("%c ",n++);
			}
		}
		printf("\n");
	}
}

void pattern9()
{
	char n='A';
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",n++);
		}
		printf("\n");
	}
}

void pattern10()
{
	int i,j;
	
	for(i=5;i>=1;i--)
	{
		for(j=i;j<=5;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}

void pattern11()
{
	int i,j,k=1;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(k%2==1)
			{
				printf("1 ");
			}
			else{
				printf("0 ");
			}
			k++;
		}
		printf("\n");
	}
}

void pattern12()
{
	char i,j;
	
	for(i='A';i<='E';i++)
	{
		for(j=i;j>='A';j--)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}

void pattern13()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void pyramid()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void diamond()
{
	int i,j,k,a,b,c;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(a=1;a<=5;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf(" ");
		}
		for(c=1;c<=5-a;c++)
		{
			printf("* ");
		}
	printf("\n");
	}
}

int main()
{	
	diamond();
	
	return 0;
}