#include<stdio.h>
void main()
{
	int radius;
	float area,perimeter;
	printf("Enter radius of a circle\n");
	scanf("%d",&radius);
	areaperi(radius,&area,&perimeter);
	printf("Area=%f\n",area );
	printf("perimeter=%f\n",perimeter );
}
areaperi(int r,float *a,float *p)
{
	*a=3.14*r*r;
	*p=2*3.14*r;
}