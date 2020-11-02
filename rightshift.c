#include<stdio.h>
void main()
{
	int i=5225,j,k;
	printf("\nDecimal %d is same as binary",i);
	showbits(i);
	for(j=0;j<=5;j++)
	{
		k=i>>j;
		//for leftshift operator just replace ">>" to "<<"
		printf("\n%d right shift %d gives",i,j);
		//replace right to left.
		showbits(k);
	}
}