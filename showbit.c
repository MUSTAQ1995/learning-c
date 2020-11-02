#include<stdio.h>
#include<string.h>
void main()
{
	int j,k;
	for(j=0;j<<=5;j++)
	{
		printf("\nDecimal %d is same as binary",j);
		showbits(j);
		k=~j;
		printf("\nOne's complement od %d is",j);
		showbits(k);
	}
}