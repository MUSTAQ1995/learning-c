#include<stdio.h>
void main()
{
	int a,b,c,sum;
	printf("ENter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	sum=calsum(a,b,c);
	printf("Sum=%d",sum);
}
calsum(x,y,z)
int x,y,z;
{
	int d;
	d=x+y+z;
	return(d);
}