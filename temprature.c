#include<stdio.h>
void main()
{
	float fr,cent;
	printf("\nEnter the temperature(F):");
	scanf("%f",&fr);
	cent=5.0/9.0*(fr-32);
	printf("temperature in centigrade =%f\n",cent );
}