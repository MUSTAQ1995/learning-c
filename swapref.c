#include<stdio.h>
void main()
{
	int a=10,b=20;
	swapr(&a,&b);
	printf("a=%d b=%d",a,b);
}
swapr(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}