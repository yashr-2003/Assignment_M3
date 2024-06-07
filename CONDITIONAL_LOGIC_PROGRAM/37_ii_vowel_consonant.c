/*37. WAP to show 
ii. Vowel or Consonant using switch case */

#include<stdio.h>
main()
{
	char choice;
	
	printf("\n\n\t Enter your choice=");
	scanf("%c",&choice);
	
	
	switch(choice)
	{
		case 'a' : 		   
		case 'e' : 		   
		case 'i' : 		   
		case 'o' : 		   
		case 'u' : 
		case 'A' : 		   
		case 'E' : 
		case 'I' : 		   
		case 'O' : 		   
		case 'U' : printf("\n\n\t Vowel.");
				   break;
				   
		default : 
				printf("\n\n\t Consonant");
				break;
	}
}	

