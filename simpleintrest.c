#include<stdio.h>
void main()
/*   int p,n,count;
   float r,si;
   count = 1;	
   while(count<=3)
   {
   	printf("Enter values of p,n and r");
   	scanf("%d%d%f",&p,&n,&r);
   	si=p*n*r/100;
   	printf("Simple Interest=Rs.%f\n",si );
   	count=count+1;
   }
}*/
{
	int p,n,count;
	float r,si;
	for(count=1;count<=3;count=count+1)
	{
	    printf("Enter the value of p,n,and r\n");
	 	scanf("%d%d%f",&p,&n,&r);
	    si=p*n*r/100;
	    printf("Simple Interest=Rs.%f\n",si);
    }
} 