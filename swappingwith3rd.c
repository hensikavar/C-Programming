// Swapping the value of two variables with using third variable.

#include<stdio.h>

void main()
{
	int a,b,c=0;
	
	printf("Enter the first number :");
	scanf("%d",&a);
	
	printf("Enter the second number :");
	scanf("%d",&b);
	
	c=b;
	b=a;
	a=c;
	
	printf("After swapping, a will be %d and b will be %d.",a,b);
	return;
}
