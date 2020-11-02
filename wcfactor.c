/*Calculation of wind chill factor*/
#include<stdio.h>
#include<math.h>
int main()
{
	float temp,vel,wcf;
	printf("\nEnter vvalues of temp and velocity:");
	scanf("%f%f,&temp,&vel");
	wcf=35.74+0.6215*temp+(0.4275*temp-35.75)*pow(vel,0.16f);
	printf("Wind chill factor=%f\n",wcf );
}