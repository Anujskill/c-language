#include <stdio.h>
 int main(){
	 
	char letter;
	printf("Enter the letter :- ");
	scanf("%c",&letter);
	char small=(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u');
	char capital=(letter=='A'||letter=='E'||letter=='I'||letter=='O'||letter=='U');
	
	if(small||capital){
		printf("Letter is Vowel.");
	}
	else{
		printf("Letter is Consonant.");
	}
	
	return 0;
	
 }