//6. Find the Character Is Vowel or Not 

#include<stdio.h>

main()
{
	char ch;
	
	printf("\n\n\tEnter the character=");
	scanf("%c",&ch);
	

	if(ch=='a' || ch=='e' || ch=='i'  || ch=='o' || ch=='u')
		printf("\n\n\n\tthe character is vowel");
		
	else if(ch=='A' || ch=='E' || ch=='I'  || ch=='O' || ch=='U')
		printf("\n\n\n\tthe character is vowel");
	
	else
		printf("\n\n\t character is Not Vowel");
	
}
