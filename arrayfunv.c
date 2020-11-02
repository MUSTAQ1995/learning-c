#include<stdio.h>
void main()
{
	int i;
	int marks[]={10,20,3,5,50,60};
	for(i=0;i<=6;i++)
		display(marks[i]);
}
display(int m)
{
	printf("%d\n",m );
}