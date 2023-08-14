#include<stdio.h>

void main()
{
	char a;
	int n;
	
	
	printf("Enter the character :");
	scanf("%c",&a);
	
	printf("Enter 1 for integer output and 2 for float output :");
	scanf("%d",&n);
	
	if(n==1)
	{
		int k=(int)(a);
		printf("%d",k);
	}	
	
	else if(n==2)
	{
		float k=(float)(a);
		printf("%.2f",k);
	}
	
	else
	{
		printf("Invalid input.");
	}
}
