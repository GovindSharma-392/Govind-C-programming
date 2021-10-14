#include<stdio.h>
int main()
{
    float salary,HRA,TA,income;
    scanf("%f",&salary);

    HRA = (salary*15)/100;
    TA = (salary*20)/100;

    income= salary + HRA + TA;

    printf("net income of person = %f",income);
    return 0;
}