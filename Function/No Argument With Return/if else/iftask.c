#include <stdio.h>

int smallestvalue()
{
	int a,b;
	
	printf("Enter the value of a:- ");
	scanf("%d",&a);
	printf("Enter the value of b:- ");
	scanf("%d",&b);
	
	if(a<b)
	{
		printf("Value of a is smallest.");
	}
	else{
		printf("Value of b is smallest.");
	}
}

int posandneg()
{
	int a;
	
	printf("Enter the value of a:- ");
	scanf("%d",&a);
	
	if(a<0)
	{
		printf("Value of a is negative.");
	}
	else{
		printf("Value of a is positive.");
	}
}

int divisibleby5()
{
	int a;
	
	printf("Enter the value of a:- ");
	scanf("%d",&a);
	
	if(a%5==0)
	{
		printf("Value of a is divisible by 5.");
	}
	else{
		printf("Value of a is not divisible by 5.");
	}
}

int divisibleby5and3()
{
	int a;
	
	printf("Enter the value of a:- ");
	scanf("%d",&a);
	
	if(a%5==0&&a%3==0)
	{
		printf("Value of a is divisible by 5 and 3.");
	}
	else{
		printf("Value of a is not divisible by 5 and 3.");
	}
}

int passorfail()
{
	int marks;
	
	printf("Enter the marks:- ");
	scanf("%d",&marks);
	
	if(marks>35)
	{
		printf("Pass");
	}
	else{
		printf("Fail");
	}
}

int leapyear()
{
	int year;
	
	printf("Enter the year:- ");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("Year is a leap year.");
	}
	else{
		printf("Year is not a leap year.");
	}
}

int largestvalue()
{
	int a,b,c;
	
	printf("Enter the value of a:- ");
	scanf("%d",&a);
	printf("Enter the value of b:- ");
	scanf("%d",&b);
	printf("Enter the value of c:- ");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		printf("Value of a is largest.");
	}
	else if(b>c && b>a){
		printf("Value of b is largest.");
	}
	else{
		printf("Value of c is largest.");
	}
}


int main()
{
	largestvalue();
	
	return 0;
}