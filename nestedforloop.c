#include<stdio.h>
void main()
{
	int r,c,sum;
	for(r=1;r<=3;r++)
		{
			for(c=1;c<=2;c++)
			{
				sum=r+c;
				printf("r=%dc=%d sum=%d\n",r,c,sum );
			}
		}
}