#include <stdio.h>

/*int factorial(int number)
{	
	if(number==1 || number==0)
	{
		return 1;
	}
	else
	{
		return number*factorial(number-1);
	}
}*/

/*int sum(int arr[])
{	
	int total=0;
	
	for(int i=0;arr[i]!='\0';i++)
	{
		total=total+arr[i];
	}
	
	return total;
}*/

int fibonaci(int ele)
{	
	if(ele==1 || ele==0)
	{
		return 1;
	}
	else
	{
		return fibonaci(ele-1)+fibonaci(ele-2);
	}
}

int main ()
{	
	//int arr[]={1,2,3,4,5,6,7,8,9,10,'\0'};
	int ele=10;
	for(int i=0;i<=ele;i++)
	{
		printf("The fibonaci series is :- %d\n",fibonaci(i));
	}
	
	return 0;
}