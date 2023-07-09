// TO convert entered days into years, weeks and days format.

#include<stdio.h>

void main()
{
	int year,week,days;
	
	printf("Enter number of days :");
	scanf("%d",&days);
	
	year=days/365;
	days=days%365;
	
	week=days/7;
	days=days%7;
	
	printf("%02d yrs:%02d weeks:%02d days",year,week,days);
	return;
}
