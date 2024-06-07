/*9. Write a program in C to find the maximum number of 
characters in a string.*/

#include<stdio.h>
main()
{
	char a[20];
	int i,j,c,max=0;
	
	printf("Enter the string=");
	scanf("%s",&a);

	for(i=0;a[i]!='\0';i++)
	{
			c=1;
		for(j=i+1;a[j]!='\0';j++)
		{
			if(a[i]==a[j])
			{
				c++;	
			}
		}
		if(c>max)
		{
			max=c;
		}
		
	}
	printf("same character=%d",max);
}
