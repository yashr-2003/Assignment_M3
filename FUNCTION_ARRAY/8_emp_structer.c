/*8.Write a program of structure employee that provides the following 
a. information -print and display empno, empname, address andage*/

#include<stdio.h>

struct employe
{
	int empno,age;
	char empname[20],address[30];
}e;
main()
{
	printf("Enter empno=");
	scanf("%d",&e.empno);
	
	printf("Enter empname=");
	scanf("%s",&e.empname);
	
	printf("Enter address=");
	scanf("%s",&e.address);
	
	printf("Enter the age=");
	scanf("%d",&e.age);
	
	printf("\n\tempno=%d",e.empno);
	printf("\n\tempname=%s",e.empname);
	printf("\n\taddress=",e.address);
	printf("\n\tage=%d",e.age);
}
