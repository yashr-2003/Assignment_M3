/*3. Write a program in C to print individual characters 
of a string in reverse order.*/

#include<stdio.h>
#include<string.h>
main()
{
	char a[20];
	int i,j,temp=0;
	
	printf("Enter the string=");
	scanf("%s",&a);
	temp=strlen(a);

		for(j=temp;j>=0;j--)
		{
			printf("%c ",a[j]);
		}
}
