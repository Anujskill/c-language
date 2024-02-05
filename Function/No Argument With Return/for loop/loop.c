#include <stdio.h>

int p1()
{
	int i;
	
	for(i=10;i>=1;i--)
	{
		printf("%d\n",i);
	}
	
}

int p2()
{
	int i;
	
	for(i=51;i<=99;i++)
	{
		printf("%d\n",i);
	}
	
}

int p3()
{
	int i,n;
	
	printf("Enter the value of n:- ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i);
	}
	
}

int p4()
{
	int i,n;
	
	printf("Enter the value of n:- ");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		printf("%d\n",i);
	}
	
}

int p5()
{
	int i,n;
	
	printf("Enter the value of n:- ");
	scanf("%d",&n);
	
	for(i=-n;i<=n;i++)
	{
		printf("%d\n",i);
	}
	
}

int p6()
{
	int i;
	
	for(i=1;i<=50;i++)
	{
		if(i%2!=0){
			printf("%d\n",i);
		}
	}
	
}

int p7()
{
	int i;
	
	for(i=1;i<=50;i++)
	{
		if(i%2==0){
			printf("%d\n",i);
		}
	}
	
}

int p8()
{
	char i;
	
	for(i='A';i<='Z';i++)
	{
		printf("%c\n",i);
	}
	
}

int p9()
{
	char i;
	
	for(i='A';i<='Z';i++)
	{
		printf("%c - %d\n",i,i);
	}
	
}

int p10()
{
	char i,j;
	
	for(i='A',j='a';i<='Z';i++,j++)
	{
		printf("%c - %c\n",i,j);
	}
	
}

int p11()
{
	int i,total=0;
	
	for(i=1;i<=10;i++)
	{
		total+=i;
	}
	printf("%d\n",total);
}

int p12()
{
	int i,n,total=0;
	
	printf("Enter the value of n:- ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2!=0){
			total+=i;
		}
	}
	printf("%d\n",total);
}

int p13()
{
	int i,n,total=0;
	
	printf("Enter the value of n:- ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==0){
			total+=i;
		}
	}
	printf("%d\n",total);
}

int p14()
{
	int i,n;
	
	printf("Enter the value of n:- ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i*i);
	}
}

int p15()
{
	int i,n;
	
	printf("Enter the value of n:- ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2==0){
			printf("%d\n",i*i);
		}
		else
		{
			printf("%d\n",i);
		}
	}
}

int p16()
{
	int i,n;
	
	printf("Enter the value of n:- ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i*=2)
	{
		printf("%d\n",i);
	}
}

int p17()
{
	int i,n,j;
	
	printf("Enter the value of n:- ");
	scanf("%d",&n);
	
	for(i=1,j=1;i<=n;i++,j*=2)
	{
		printf("%d\n",i*j);
	}
}

int p18()
{
	int i;
	
	for(i=65;i<=90;i++)
	{
		if(i%2!=0){
		printf("%c\n",i);
		}
	}
}

int p19()
{
	int i,n,t1=0,t2=1,sum=t1+t2;
	
	printf("Enter the value of n:- ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d\n",sum);
		t1=t2;
		t2=sum;
		sum=t1+t2;
	}
}

int p20()
{
	int i;
	
	for(i=65;i<=90;i++)
	{
		if(i%4==!0){
		printf("%c\n",i);
		}
		else if(i%2==!0){
		printf("%c\n",i+32);
		}
	}
}

int main()
{
	p20();
	
	return 0;
}