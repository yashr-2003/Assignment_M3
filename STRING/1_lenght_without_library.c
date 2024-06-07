/*1. Write a program in C to find the length of a string without 
using library functions.*/
 
#include<stdio.h>
#include<string.h>
main()
{
	char str[20];
	int i,ln=0;
	printf("Enter the name=");
	scanf("%s",&str);
	
	for(i=0;str[i]!='\0';i++)
	{
		ln++;
	}
	printf("length of %s=%d",str,ln);
}
