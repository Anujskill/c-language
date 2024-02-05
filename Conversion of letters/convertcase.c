#include <stdio.h>
int main(){
	
	char letter;
	char convert=0;
	
	printf("Enter a letter :- ");
	scanf("%c",&letter); 
	
	if(letter>=65&&letter<=90){
		convert=letter+32;
		printf("Coversion is :- %c",convert);
	}
	else{
		convert=letter-32;
		if(letter>=97&&letter<=122){
			printf("Coversion is :- %c",convert);
		}
		else{
			printf("Please enter valid letter.");
		}
	}
	
	return 0;
}