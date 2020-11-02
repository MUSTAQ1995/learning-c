#include<stdio.h>
void main()
{
	int avg,sum=0;
	int i;
	int marks[30];/*array declaration*/
	for(i=0;i<=29;i++)
	{
		printf("ENter the marks\n");
		scanf("%d",&marks[i]);/*store data in array*/
	}
	for(i=0;i<=29;i++)
		sum=sum+marks[i];/*read data feom an array*/
		avg=sum/30;
	printf("Average marks=%d\n",avg);
}