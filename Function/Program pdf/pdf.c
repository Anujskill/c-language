#include <stdio.h>

int reverse()
{
	int name1[20],name2[20];
	
	printf("Enter the value :- ");
	scanf("%d",&name1);
	
	int i=0;
	while(name1[i]!='\0')
	{
		i++;
	}
	i--;
	
	int j=0;
	while(i>=0)
	{
		name2[j]=name1[i];
		j++;
		i--;
		
	}
	
	name2[j]='\0';
	
	printf("Reverse value is :- %d\n.",name2);
	
	return 0;
}

int main()
{
	reverse();
	return 0;
}
