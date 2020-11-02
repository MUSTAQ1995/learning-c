#include<stdio.h>
#include<string.h>
void main()
{
	char source[]="sayanara";
	char target[20];
	strcpy(target,source);
	printf("\nsource string =%s",source);
	printf("\ntarget string =%s\n",target);
}