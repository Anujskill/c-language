#include <stdio.h>

int main()
{
	int sub1,sub2,sub3,sub4,sub5,total;
	float percent;
	
	printf("Enter the marks of sub1 :- ");
	scanf("%d",&sub1);
	printf("Enter the marks of sub2 :- ");
	scanf("%d",&sub2);
	printf("Enter the marks of sub3 :- ");
	scanf("%d",&sub3);
	printf("Enter the marks of sub4 :- ");
	scanf("%d",&sub4);
	printf("Enter the marks of sub5 :- ");
	scanf("%d",&sub5);
	
	total=sub1+sub2+sub3+sub4+sub5;
	printf("Total marks obtained is :- %d\n",total);
	
	percent=total*100/500;
	printf("Percentage :- %f\n",percent);
	
	if(percent>75){
		printf("Grade A");
	}
	else if(percent>60){
		printf("Grade B");
	}
	else if(percent>45){
		printf("Grade C");
	}
	else if(percent>35){
		printf("Grade D");
	}
	else{
		printf("Fail");
	}

	return 0;
	
}