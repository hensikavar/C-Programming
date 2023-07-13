// // Swapping the value of two variables without using third variable.

#include<stdio.h>

void main()
{
	int a,b;
	
	printf("Enter the first number :");
	scanf("%d",&a);
	
	printf("Enter the second number :");
	scanf("%d",&b);
	
	b=a+b;
	a=b-a;
	b=b-a;
	
	printf("After swapping, a will be %d and b will be %d.",a,b);
}
