#include<stdio.h>
void main()
{
	int year;
	printf("ENter the year\n");
	scanf("%d",&year);
	year%100==0?(year%400==0?printf("Leap year\n"):printf("not a leap year\n")):(year%4==0?printf("Leap year\n"):printf("Not a leap year\n"));
}