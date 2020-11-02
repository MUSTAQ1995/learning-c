#include<stdio.h>
void main()
{
	int a,fact;
	printf("Enter any number\n");
	scanf("%d",&a);
	fact=rec(a);
	printf("Factorial Value=%d\n",fact);
}
rec(int x)
{
	int f;
	if(x==1)
		return(1);
	else
		f=x*rec(x-1);
	return(f);
}
/*In this code the factorial value the the "Zero"(0!) unable to display
showing segmentation fault*/