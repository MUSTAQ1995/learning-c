#include<stdio.h>
void main()
{
	int i=3;
	int *j;
	j=&i;
	printf("\nAddress of i=%u",&i);
	printf("\nAddress of i=%u",j);
	printf("\nAddress of j=%u",&j);
	printf("\nAddress of j=%u",j);
	printf("\nAddress of i=%d",i);
	printf("\nAddress of i=%d",*(&i));
	printf("\nAddress of i=%d",*j);
}