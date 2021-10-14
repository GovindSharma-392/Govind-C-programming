#include<stdio.h>
int main()
{
   int y, m, d,ndays;	
	
	printf("Input no. of days: ");
	
	scanf("%d", &ndays);
	
	y = ndays/365;
	
	ndays = ndays-(365*y);
		
	m = ndays/30;
	
	d = ndays-(m*30);
	
	printf(" %d Year \n %d Month \n %d Day", y, m, d);
	
    return 0;
}