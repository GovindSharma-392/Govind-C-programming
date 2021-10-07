#include <stdio.h>

int main()
{
    int a,b,h,area;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("enter the value of h");
    scanf("%d",&h);
    area=0.5*(a+b)*h;
    printf("area of trapezium=%d",area);
    
    
    return 0;
}
