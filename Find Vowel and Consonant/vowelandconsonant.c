#include <stdio.h>
 int main(){
	 
	char letter;
	printf("Enter the letter :- ");
	scanf("%c",&letter);
	
	if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'||letter=='A'||letter=='E'||letter=='I'||letter=='O'||letter=='U'){
		printf("Letter is Vowel.");
	}
	else{
		printf("Letter is Consonant.");
	}
	
	return 0;
	
 }