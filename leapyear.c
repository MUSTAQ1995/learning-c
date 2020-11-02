/*Check whetheer the year is leap or not*/
/*Year is Leap if it is a century year and is divisible by 400*/
/*Year is leap if it is a non-century year and is divisible by 4*/

#include<stdio.h>
void main()
{
	int yr;
	printf("\nEnter  a Year.");
	scanf("%d",&yr);
	if(yr%100==0)
	{
		if(yr%400==0)
			printf("Its a Leap Year\n");
		else
			printf("NOt a leap Year\n");
	}
	else
	{
		if(yr%4==0)
			printf("The Year is Leap year\n");
		else
			printf("The year is not a leap Year\n");
	}
}