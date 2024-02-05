#include <stdio.h>

int main ()
{
	int sub1;
	int sub2;
	int sub3;
	int total=0;
	float percent;
	
	printf("Enter the marks od subject1 :- ");
	scanf("%d",&sub1);
	printf("Enter the marks od subject2 :- ");
	scanf("%d",&sub2);
	printf("Enter the marks od subject3 :- ");
	scanf("%d",&sub3);
	
	total=sub1+sub2+sub3;
	printf("Total marks obtained :- %d\n",total);
	
	percent=total*100/300;
	printf("Percentage :- %f",percent);
	
	return 0;
	
}