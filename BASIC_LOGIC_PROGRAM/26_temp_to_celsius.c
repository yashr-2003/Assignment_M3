//26.Convert temperature Fahrenheit to Celsius 

#include<stdio.h>
main()
{
	float a,s1,s2,s3;
	
	printf("Enter the temrater=");
	scanf("%f",&a);
	
	s1=a-32;
	s2=s1*5;
	s3=s2/9;
	
	printf("Celsius=%.2f*c",s3);
}
