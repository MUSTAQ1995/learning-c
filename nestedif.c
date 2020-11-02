#include<stdio.h>
void main()
{
	int i;
	printf("Enter either 1 or 2\n");
	scanf("%d",&i);
	if(i==1)
		printf("You would go to Heaven\n");
	else{
		if(i==2)
			printf("Hell was created with you in mind\n");
		else{
			printf("How about mother earth!\n");
		}
	}
}