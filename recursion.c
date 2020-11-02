#include<stdio.h>
void main()
{
	int a,fact;
	printf("Enter the number\n");
	scanf("%d",&a);
	fact=factorial(a);
	printf("factorial value=%d",fact);
}
factorial(int x)
{
	int f=1,i;
	for(i=x;i>=1;i--)
		f=f*i;
	return(f);
}