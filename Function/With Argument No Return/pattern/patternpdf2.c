#include <stdio.h>

void pattern1(int k)
{
	int i,j;
	
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}

void pattern2(int k)
{
	int i,j;
	
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}

void pattern3(int k)
{
	int i,j;
	
	for(i=k;i>=1;i--)
	{
		for(j=k;j>=i;j--)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}

void pattern4(int k)
{
	int i,j,n=1;
	
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",n++);
		}
		printf("\n");
	}
}

void pattern5(int k)
{
	int i,j;
	
	for(i=k;i>=1;i--)
	{
		for(j=k;j>=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}

void pattern6(char k)
{
	char i,j;
	
	for(i='A';i<=k;i++)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}

void pattern7(int k)
{
	char n='A';
	int i,j;
	
	for(i=1;i<=k;i++)
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

void pattern8(int k)
{
	char n='A';
	int i,j;
	
	for(i=1;i<=k;i++)
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

void pattern9(int k)
{
	char n='A';
	int i,j;
	
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",n++);
		}
		printf("\n");
	}
}

void pattern10(int k)
{
	int i,j;
	
	for(i=k;i>=1;i--)
	{
		for(j=i;j<=k;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}

void pattern11(int a)
{
	int i,j,k=1;
	
	for(i=1;i<=a;i++)
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

void pattern12(char k)
{
	char i,j;
	
	for(i='A';i<=k;i++)
	{
		for(j=i;j>='A';j--)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}

void pattern13(int k)
{
	int i,j;
	
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void pyramid(int a)
{
	int i,j,k;
	
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a-i;j++)
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

void diamond(int m)
{
	int i,j,k,a,b,c;
	
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=m-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(a=1;a<=m;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf(" ");
		}
		for(c=1;c<=m-a;c++)
		{
			printf("* ");
		}
	printf("\n");
	}
}


int main()
{	
	int m=5;
	diamond(m);
	
	return 0;
}


