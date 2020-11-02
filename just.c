//#include"stdafx.h"
#include<stdio.h>
void main()
{
  int year=1;
  float principal=6000,salvagevalue=2000,yearlyprofit=1000;
  float valueoption1,valueoption2,interest;
  while(true)
  {
  	valueoption1=salvagevalue+yearlyprofit*year;
  	interest=principal*0.09f*year;
  	valueoption2=principal+interest;
  	printf("year=%2d value option 1=%10.2f value option 2=%10.2f\n",year,valueoption2,valueoption1 );
  	if(valueoption1>valueoption2)
  		break;
  	year++;
  	printf("Minimum life of the Machine is %d years\n",year-1 );
  }
}