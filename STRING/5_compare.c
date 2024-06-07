/*5. Write a program in C to compare two strings 
without using string library functions.*/ 

#include<stdio.h>
main()
{
	char a[20],b[20];
	int i,temp=0;
	
	printf("Enter the string=");
	scanf("%s",&a);
	
	printf("Enter the string=");
	scanf("%s",&b);
	
	for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
	{
		
		if(a[i]!=b[i])
		{
			temp++;
		}
	}
	
		if(temp>=1)
			printf("Strings are not same ");
		else
			printf("Strings are same");
}
