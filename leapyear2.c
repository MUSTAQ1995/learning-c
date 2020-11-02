#include<stdio.h>
void main()
{
	int year;
	printf("\nEnter the year:");
	scanf("%d",&year);
	if(year%400==0||year%100!=0&&year%4==0)
		printf("Leap year\n");
	else
		printf("NOt a Leap year\n");
}