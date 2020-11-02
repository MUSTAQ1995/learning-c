#include<stdio.h>
void main()
{
	int no;
	printf("\nEnter any number:");
	scanf("%d",&no);
	if(no<0)
		no=no*-1;
	printf("The absolute value of given number is %d\n",no );
}