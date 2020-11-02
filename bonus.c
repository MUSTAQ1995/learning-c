#include<stdio.h>
void main()
{
	int bonus,currentyear,yearofjoin,yearsofservice;
	printf("Enter current year and Year of joining");
	scanf("%d%d",&currentyear,&yearofjoin);

	yearsofservice = currentyear-yearofjoin;

	if(yearsofservice=>3)
	{
		bonus=3000;
		printf("Bonus=Rs.%d",bonus);
	}
}