#include<stdio.h>
 main()
{
	char ch;
	printf("Enter any alphabet");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
		return(ch);
	else
		return(ch+32);
 }