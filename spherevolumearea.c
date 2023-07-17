#include<stdio.h>

void main()
{
	float r;
	
	printf("Enter the radius : ");
	scanf("%f",&r);
	
	printf("Surface area will be %.2f\n",4*3.14*r*r);
	printf("Volume of the sphere will be %.2f",(4/3)*3.14*r*r*r);
	return;
}
