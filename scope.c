#include<stdio.h>
void main()
{
	auto int i=1;
	{
		{
			{
				printf("%d\n", i);
			}
			printf("%d\n", i);
		}
		printf("%d\n", i);
	}
}