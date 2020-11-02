#include<stdio.h>
void main()
{
	int i,n=1;
	printf("Prime number between 1&300 are\n");
	while(n<=300)
	{
		i=2;
		while(i<n)
		{
			if(n%i==0)
				break;
			else
				i++;
		}
		if(i==n)
			printf("%d\t",n );
		n++;
	}
}