#include<stdio.h>
void main()
{
	int n,a,b;
	long int revnum=0;
	printf("\nEnter a five digit number(<32767):");
	scanf("%d",&n);
	a=n%10;
	n=n/10;
	revnum=revnum+a*10000;
	a=n%10;
	n=n/10;
	revnum=revnum+a*1000;
	a=n%10;
	n=n/10;
	revnum=revnum+a*100;
	a=n%10;
	n=n/10;
	revnum=revnum+a*10;
	a=n%10;
	revnum=revnum+a;
	printf("The reversed number is %ld\n",revnum );
}