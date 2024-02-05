#include <stdio.h>

void circle()
{
	float radius,area=0;
	
	printf("Enter the value of radius:- ");
	scanf("%f",&radius);
	
	area=3.14*radius*radius;
	printf("Area of circle is %f",area);
	
}

void square()
{
	float side,area=0;
	
	printf("Enter the value of side square:- ");
	scanf("%f",&side);
	
	area=side*side;
	printf("Area of square is %f",area);
	
}

void rectangle()
{
	float width,length,area=0;
	
	printf("Enter the value of width:- ");
	scanf("%f",&width);
	printf("Enter the value of length:- ");
	scanf("%f",&length);
	
	area=length*width;
	printf("Area of rectangle is %f",area);
	
}

void triangle()
{
	float height,base,area=0;
	
	printf("Enter the value of height:- ");
	scanf("%f",&height);
	printf("Enter the value of base:- ");
	scanf("%f",&base);
	
	area=height*base/2;
	printf("Area of triangle is %f",area);
	
}

void simpleinterest()
{
	float value1,value2,value3,interest=0;
	
	printf("Enter the value1 :- ");
	scanf("%f",&value1);
	printf("Enter the value2 :- ");
	scanf("%f",&value2);
	printf("Enter the value3 :- ");
	scanf("%f",&value3);
	
	interest=value1*value2*value3/100;
	printf("Simple Interest is %f",interest);
	
}

void netbill()
{
	float rate,qty,amt,dis,billamt,gst,netbill;
	
	printf("Enter the rate :- ");
	scanf("%f",&rate);
	printf("Enter the qty :- ");
	scanf("%f",&qty);
	
	amt=rate*qty;
	dis=amt*5/100;
	billamt=amt-dis;
	gst=billamt*18/100;
	netbill=billamt+gst;
	
	printf("Rate\t\tQty\t\tAmt\t\tDis\t\tBillamt\t\tGst\t\tNetbill\n");
	printf("%f\t%f\t%f\t%f\t%f\t%f\t%f", rate,qty,amt,dis,billamt,gst,netbill);
	
}

void swapping()
{
	int a,b,c;
	
	printf("Enter the value of a :- ");
	scanf("%d",&a);
	printf("Enter the value of b :- ");
	scanf("%d",&b);
	
	printf("Value of a :- %d\n", a);
	printf("Value of b :- %d\n", b);
	
	c=a;
	a=b;
	b=c;
	
	printf("Swapped value of a :- %d\n", a);
	printf("Swapped value of b :- %d", b);
	
}

void swappingwithoutvariable()
{
	int a,b;
	
	printf("Enter the value of a :- ");
	scanf("%d",&a);
	printf("Enter the value of b :- ");
	scanf("%d",&b);
	
	printf("Value of a :- %d\n", a);
	printf("Value of b :- %d\n", b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("Swapped value of a :- %d\n", a);
	printf("Swapped value of b :- %d", b);
	
}

int main()
{
	swappingwithoutvariable();
	
	return 0;
}