#include <stdio.h>
#include <string.h>

struct Student{
	int id,eng,hindi,guj,total;
	char name[15];
};

struct Student res;

int main() 
{
	struct Student s1[3];
	
	for(int i=0;i<3;i++)
	{	
	printf("\nEnter the id :- ");
	scanf("%d",&s1[i].id);
	printf("Enter the name :- ");
	scanf("%s",&s1[i].name);
	printf("Enter the eng :- ");
	scanf("%d",&s1[i].eng);
	printf("Enter the hindi :- ");
	scanf("%d",&s1[i].hindi);
	printf("Enter the guj :- ");
	scanf("%d",&s1[i].guj);
	}
	
	for(int i=0;i<3;i++)
	{	
	printf("\nid :- %d\n",s1[i].id);
	printf("name :- %s\n",s1[i].name);
	printf("eng :- %d\n",s1[i].eng);
	printf("hindi :- %d\n",s1[i].hindi);
	printf("guj :- %d\n",s1[i].guj);
	
	res.total=s1[i].eng+s1[i].hindi+s1[i].guj;
	printf("Total :- %d\n\n",res.total);
	}
	
	return 0;
}