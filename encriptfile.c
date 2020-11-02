#include<stdio.h>
#include<stdlib.h>
void main()
{
	encrypt();
}
encrypt()
{
	FILE *fs,*ft;
	char ch;
	fs=fopen("SOURCE.C","r");/*normal file*/
	ft=fopen("TARGET.C","w");/*encrypred file*/
	if(fs==NULL||ft==NULL)
	{
		printf("\nFile opening error!\n");
		exit(1);
	}
	while((ch=getc(fs))!=EOF)
		putc(~ch,ft);
	fclose(fs);
	fclose(ft);
}