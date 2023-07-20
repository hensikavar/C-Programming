//Armstong Number

#include<stdio.h>

void main()
{
	int n,on,dig=0,i=1,num=1,sum=0,r;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	
	on=n;
	
	while(n>0)
	{
		dig++;
		n=n/10;
	}
	
	n=on;
	
	while(n>0)
	{
		r=n%10;
		i=1;
		while(i<=dig)
		{
			num=num*r;
			i++;
		}
		
		sum=sum+num;
		n=n/10;
		num=1;
	}
	
	if(sum==on)
	{
		printf("Armstrong number");
	}
	else
	{
		printf("Not Armstrong number");
	}
	return;
}
