#include<stdio.h>
void main()
{
	float bp,da,hra,grpay;
	printf("\nENter Basic Salary of Mustaq:");
	scanf("%f",&bp);
	da=0.4*bp;
    hra=0.2*bp;
    grpay=bp+da+hra;
    printf("\nBasic Salary of Mustaq=%f\n",bp);
    printf("Dearness Allowance =%f\n",da);
    printf("House Rent Allowance=%f\n",hra);
    printf("Gross Pay of Mustaq is %f\n",grpay );
}