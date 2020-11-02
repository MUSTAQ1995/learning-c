#include<stdio.h>
void main()
{
	float km,m,cm,ft,inch;
	printf("\nENter the distance in Kilometer:");
	scanf("%f",&km);
	m=km*1000;
	cm=m*100;
	inch=cm/2.54;
	ft=inch/12;
	printf("\ndistance in meter = %f\n",m);
	printf("\nDistance in centimeter=%f\n",cm);
	printf("Distance in feet =%f\n",ft);
	printf("Distance in inches=%f\n",inch );
}