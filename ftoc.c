#include<stdio.h>

void main()
{
	float f,c;
	
	printf("Enter the temperature in fahreneit :");
	scanf("%f",&f);
	
	c=f-32;
	c=c*0.55;
	
	printf("Temperature in fahreneit will be %.2f.",c);
	return;
}
