#include<stdio.h>
void main()
{
	int goals;
	printf("Enter the number of goals scored against India\n");
	scanf("%d",&goals);
	if(goals<=5)
		goto sos;
	else{
		printf("About time soccer players learnt C\n");
		printf("and said goodbyr! adiey! to soccer\n");
	
	}
	sos:
	printf("To errors in Humans!\n");
}