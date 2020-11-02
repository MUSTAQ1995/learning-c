#include<stdio.h>
#include<string.h>
#define FOUND 1
#define NOTFOUND 0
void main()
{
	char masterlist[6][10]={
		"Prajwal","Kihsore","VEnkey","Mustaq"
	};
	int i,flag,a;
	char yourname[10];
	printf("\nEnter your name\n");
	scanf("%s",yourname);
	flag=NOTFOUND;
	for(i=0;i<=5;i++)
	{
		a=strcmp(&masterlist[i][0],yourname);
		if(a==0)
		{
			printf("Welcome,you can enter the palace\n");
			flag=FOUND;
			break;
		}
	}
	if(flag==NOTFOUND)
		printf("Sorry,you are trespasser\n");
}