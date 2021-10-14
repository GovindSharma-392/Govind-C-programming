#include<stdio.h>
int main()
{
    int a,total;
    printf("input the a");
    scanf("%D",&a);
    total=a/100;
    printf("%d note o 100.00\n",total);
    a=a-(total*100);
    total=a/50;
    printf("%d notes of 50.00\n",total);
    a=a-(total*50);
    total=a/20;
    printf("%d notes of 20.00\n",total);
    a = a-(total*20);
	total =a/10;
	printf("%d Notes of 10.00\n", total);
	a = a-(total*10);
	total = a/5;
	printf("%d Notes of 5.00\n", total);
	a = a-(total*5);
	total = a/2;
	printf("%d Notes of 2.00\n", total);
	a = a-(total*2);
	total = a/1;
	printf("%d Notes of 1.00\n", total);
    return 0;
}