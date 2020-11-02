#include<stdio.h>
void main()
{
	int i;
	int marks[]={55,65,75,56,78,88,90};
	for(i=0;i<=6;i++)
		display(&marks[i]);
}
display(int *n)
{
	printf("%d\n",*n );
}
	/*{
		int arr[]={10,20,30,45,67,56,74};
		int *i,*j;
		i=&arr[1];
		j=&arr[5];
		printf("%ld%d\n",j-i,*j-*i);
	}*/