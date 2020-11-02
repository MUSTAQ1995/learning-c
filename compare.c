#include<stdio.h>
void main()
{
	int arr[]={10,20,3,36,72,45,36};
	int *j,*k;
	j=&arr[5];
	k=(arr+5);
	if(j==k)
		printf("The two pointers point to the same location\n");
	else
		printf("The two pointers do not point to the same location\n");
}