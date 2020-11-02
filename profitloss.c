#include<stdio.h>
int main()
{
	float cp,sp,p,l;
	printf("\nEnter cost price snd selling price:");
	scanf("%f%f",&cp,&sp);
	p=sp-cp;
	l=cp-sp;
	if(p>0)
		printf("THe seller has made a profit of Rs.%f\n",p );
	else
		printf("The seller met with an loss of Rs.%f\n",p );
	if(p==0)
		printf("There is no loss nor profit\n");
}