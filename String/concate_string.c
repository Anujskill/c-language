#include <stdio.h>
int main()
{
    char str1[50];
	char str2[50];
	int i,j;
	
	printf("Enter value of str1 :- ");
	scanf("%s",&str1);
	printf("Enter value of str2 :- ");
	scanf("%s",&str2);
	
	for(i=0;str1[i]!='\0';i++);
	
		for(j=0;str2[j]!='\0';j++)
		{
			str1[i]=str2[j];
			i++;
		}
	
	str1[i]='\0';
	printf("%s",str1);
	
	return 0;
	
}