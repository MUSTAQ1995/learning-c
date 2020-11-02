#include<stdio.h>
void main()
{
   int r,s,a,young;
   printf("\nEnter of ram,sham,ajay:");
   scanf("%d%d%d",&r,&s,&a);
   if(r<s)
   {
   	if(r<a)
   		young=r;
   	else
   		young=a;
   }
   else
   {
   	if(s<a)
   		young=s;
   	else
   		young=a;
   }
   printf("The youngest of ram(%d),sham(%d)and ajay(%d) is %d\n",r,s,a,young);
}