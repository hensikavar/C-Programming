// Area of right angled triangle.

#include<stdio.h>

void main()
{
	float b,h,area;
	
	printf("Enter the base of triangle :");
	scanf("%f",&b);
	printf("Enter the height of triangle :");
	scanf("%f",&h);
	
	area=(b*h)/2;
	
	printf("Area of triangle will be %.2f",area);
	return;
}
