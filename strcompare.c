#include<stdio.h>
#include<string.h>
void main()
{
	char stringone[]="Jerry";
	char stringtwo[]="Ferry";
	int i,j,k;
	i=strcmp(stringone,"Jerry");
	j=strcmp(stringone,stringtwo);
	k=strcmp(stringone,"Jerryboy");
	printf("\n%d%d%d\n",i,j,k);
}