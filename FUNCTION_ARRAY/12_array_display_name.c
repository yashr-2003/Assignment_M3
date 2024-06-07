//12. WAP to accept 5 students name and store it in array

#include<stdio.h>
main()

{
	char arr[5][10];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("\n\t Enter student Name=");
		scanf("%s",&arr[i]);
	}
	
		
	for(i=0;i<5;i++)
	{
		printf("\n\t arr[%d]=%s",i,arr[i]);
	}
	
}
