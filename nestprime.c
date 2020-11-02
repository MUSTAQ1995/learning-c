#include<stdio.h>
//prime numbers till 300.
void main()
{
     int i,n=1;
     printf("\nPrime numbers from 1 to 300 are:\n");
     while(n<=300)/*Loop to check numbers upto 300*/
     {
     	i=2;
     	while(i<n)/*Loop starting from 2 to the number*/
     	{
     		if(n%i==0)
     			break;/*takes comtrol out of the inner while as soon as the number is fully divisible*/
     	     else
     	     	i++;
     	}
     	if(i==n)
     		printf("%d\t",n);
     	n++;
     }
}