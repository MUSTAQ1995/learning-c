
/*Conver cartesian co-ordinates to polar co-ordinates*/
#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,r,theta;
	printf("\nENter the x and y co-ordinates:");
	scanf("%f%f",&x,&y);
	theta=atan2(y,x);
	theta=theta*180/3.14;
	printf("r=%ftheta=%f\n",r,theta);
}
