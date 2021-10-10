#include<stdio.h>
int main()
{
    float math,phy,chem,eng,comp,avgmarks;
    printf("marks of maths=");
    scanf("%f",&math);
    printf("marks of phy=");
    scanf("%f",&phy);
    printf("marks of chem=");
    scanf("%f",&chem);
    printf("marks of eng=");
    scanf("%f",&eng);
    printf("marks of comp=");
    scanf("%f",&comp);
    avgmarks=(math+phy+chem+eng+comp)/500*100;
    printf("avgmarks=%f",avgmarks);
    return 0;
    
}