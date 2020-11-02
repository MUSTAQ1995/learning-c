#include<stdio.h>
void main()
{
	int x,y,r;
	int dis,d;
	printf("\nENter radius of circle and coordinates of point(x,y):");
	scanf("%d%d%d",&r,&x,&y);
	dis=x*x+y*y;
	d=r*r;
	if(dis==d)
		printf("Point is on the circle\n");
	else
	{
		if(dis>d)
			printf("Point is ontside the circle\n");
		else
			printf("Point is inside the circle\n");
	}
}