#include<stdio.h>
int main()
{
	int n,a;
	printf("Enter the number:\n");
	scanf("%d",&n);
	a=n/2;
    if(a==0)
    	printf("The entered number is Even %d\n",a );
    else
    	printf("The entered number is Odd \n");
}