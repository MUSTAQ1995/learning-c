#include<stdio.h>
void main()
{
	struct book
	{
		char name;
		float price;
		int pages;
	};
	struct book b1={'B',130.00,550};
	printf("\nAddress of name=%u",&b1.name);
	printf("\nAddress of price=%u",&b1.price);
	printf("\nAddress of pages=%u\n",&b1.pages);
}