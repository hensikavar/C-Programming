// To find the greatest number among the three numbers entered.

#include<stdio.h>

void  main()
{
	int a,b,c;
	
	printf("Enter first number :");
	scanf("%d",&a);
	
	printf("Enter second number :");
	scanf("%d",&b);
	
	printf("Enter third number :");
	scanf("%d",&c);
	
	if(a>b && a>c)
		printf("%d is greatest among three",a);
	
	else if(b>c && b>a)
		printf("%d is greatest among three",b);
		
	else
		printf("%d is greatest among three",c);
		
	return;
}
