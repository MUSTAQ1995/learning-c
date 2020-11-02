#include<stdio.h>
void main()
{
	int i=65,j;
	printf("\n value of i=%d",i);
	j=i&32;
	if(j==0)
		printf("\nand its fifth bit is off");
	else
		printf("\nand its fifth bit is son");
	j=i&64;
	if(j==0)
		printf("\n whereas its sixth bit is off");
	else
		printf("\nwhere as its sixth bit is on\n");
}