#include<stdio.h>
void main()
{
	char another='y';
	int num;
	for(;another=='y';)
	{
		printf("Enter a number");
		scanf("%d",&num);
		printf("square of %d is %d\n",num,num*num);
		printf("\n Want to enter another number/n");
		scanf("%c",&another);
	}
}