#include<stdio.h>
void main()
{
	char ch;
	printf("ENter the character:\n");
	scanf("%c",&ch);
	if((ch>=0&&ch<=47)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123))
	{
	    printf("The Character entered is a special symbol\n");
	}
	else
		printf("Not a special symbol\n");
	
}