//This program is to check whether the number is postive or negative.
#include<stdio.h>

void  main()
{
	int a;
	
	printf("Enter the number :");
	scanf("%d",&a);
	
	if(a>0)
		printf("Number is positive");
	
	else if(a<0)
		printf("Number is negative");
		
	else
		printf("Number is zero.");
}
