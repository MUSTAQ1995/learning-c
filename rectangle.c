#include<stdio.h>
void main()
{
	int l,b,area,peri;
	printf("\nEnter the length and breadth of the rectangle:");
	scanf("%d%d",&l,&b);
	area=l*b;
	peri=2*(l+b);
	if(area>peri)
		printf("Area is greater than perimeter\n");
	else
		printf("area is lesser than perimeter\n");
}