/*30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the 
minimum bill should be of Rs. 256/- */

#include<stdio.h>
main()
{
	int A,a;
	
	printf("\n\n\tEnter the bill Amount=");
	scanf("%d",&A);
	
	if(A>800)
	{
	
		a=A+(A*0.18); //18%
		printf("\n\n\tyou have to pay %d (with charge)",a);
	}
	else if(A>=256 && A<800)
		printf("\n\n\t you have to pay %d(without charge)",A);

	else
		printf("\n\n\t you cross the minimum limit of 256");
}
