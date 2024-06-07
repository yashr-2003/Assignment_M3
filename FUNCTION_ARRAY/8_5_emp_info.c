/*8.b. Write a program of structure for five employee 
that provides the following information -print and 
display empno, empname, address andage */
#include<stdio.h>

struct employe
{
	int empno,age;
	char empname[20],address[30];
}e[5];
main()
{
	int i;
	for(i=0;i<5;i++)
	{
	printf("\n\n");
	printf("Enter empno=");
	scanf("%d",&e[i].empno);
	
	printf("\nEnter empname=");
	scanf("%s",&e[i].empname);
	
	printf("\nEnter address=");
	scanf("%s",&e[i].address);
	
	printf("\nEnter the age=");
	scanf("%d",&e[i].age);
	}
	for(i=0;i<5;i++)
	{
		printf("\n\n");
	printf("\n\tempno=%d",e[i].empno);
	printf("\n\tempname=%s",e[i].empname);
	printf("\n\taddress=%s",e[i].address);
	printf("\n\tage=%d",e[i].age);
	}
}
