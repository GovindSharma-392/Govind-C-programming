#include<stdio.h>
int main()
{
   int p,p1,p2;

   p=30000;
   p1= p +(p*20)/100;
   p2= p1 + (p1*30)/100;

   printf("population after first year=%d \n  population after second year =%d",p1,p2);
	
    return 0;
}