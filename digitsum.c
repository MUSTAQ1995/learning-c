#include<stdio.h>
#include<math.h>
void main()
{
    int tot,a,b,c,d,e,f,g,h,i,sum;
    printf("Enter the five digit number=\n");
    scanf("%d",&tot);
    a=tot/10000;
    b=tot%10000;
    c=b/1000;
    d=b%1000;
    e=d/100;
    f=d%100;
    g=f/10;
    h=f%10;
    i=h;
    sum=a+c+e+g+i;
    printf("Sum of five digits=%d\n",sum );
}