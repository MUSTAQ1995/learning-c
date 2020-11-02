#include<stdio.h>
#include<string.h>
void main()
{
	char source[]="Floks!";
	char target[30]="Hello how are you ";
	strcat(target,source);
	printf("\nsource string=%s",source);
	printf("\ntarget string=%s\n",target);
}