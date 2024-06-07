/*10.find the area of a rectangular prism formula : A=2(wl+hl+hw). */

#include<stdio.h>

main()
{
	
	int A,w,h,l;
	
	printf("Enter w=");
	scanf("%d",&w);
	
	printf("Enter h=");
	scanf("%d",&h);
	
	printf("Enter l=");
	scanf("%d",&l);
	
	A=2*((w*l)+(h*l)+(h*w));
	
	printf("area of a rectangular prism=%d",A);

}
