#include <stdio.h>
#include <string.h>

struct Student{
	int rollnumber;
	char name[20];
};

int main()
{
	struct Student s1;
	s1.rollnumber=10;
	strcpy(s1.name,"Raj");
	
	printf("Rollnumber :- %d\n",s1.rollnumber);
	printf("Name :- %s\n",s1.name);
	
	return 0;
}