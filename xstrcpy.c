#include<stdio.h>
#include <string.h>
void main()
{
	char source[]="Sayanora";
	char target[20];
	xstrcpy(target,source);
	printf("\nsource string =%s",source);
	printf("\ntarget string=%s\n",target);
}
xstrcpy(char *t,char *s)
{
	while(*s!='\0')
	{
		*t=*s;
		s++;
		t++;
	}
	*t='\0';
}