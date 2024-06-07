/*8. WAP to reverse a string and check that the string is palindrome
 or not */
 #include<stdio.h>
 #include<string.h>
 main()
 {
 	char a[20],b[20];
 	int i,q=0;
 	
 	printf("Enter the string=");
 	scanf("%s",&a);
 	
	strcpy(b,a);
 	strrev(b);
 	
 	for(i=0;a[i]!=0;i++)
 	{
 		if(a[i]!=b[i])
		 {
			 q++;	
		 }	
	}
		if(q>=1)
			printf("\n %s is not palidrome",a);
		else
			printf("\n %s is palidrome",a);
}
 
 
