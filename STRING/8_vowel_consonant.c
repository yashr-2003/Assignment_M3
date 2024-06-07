/*8. Write a program in C to count the total number of vowels 
or consonants in a string. */
#include<stdio.h>
main()
{
	char a[20];
	int i,v=0,c=0;
	
	printf("Enter the string=");
	scanf("%s",&a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a' || a[i]=='A' || a[i]=='E' || a[i]=='e'||
		a[i]=='i'|| a[i]=='I' || a[i]=='o' || a[i]=='O' ||
		a[i]=='u' || a[i]=='U')
			v++;
		else
			c++;
	}
	printf("\n\tvowel=%d",v);
	printf("\n\tconsonant=%d",c);
}
