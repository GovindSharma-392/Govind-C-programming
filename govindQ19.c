#include <stdio.h>

int main()
{
    int r,diameter,circ,area;
    printf("enter the value of r");
    scanf("%d",&r);
    diameter=2*r;
    printf("diameter=%d\n",diameter);
    circ=2*3.14*r;
    printf("circ=%d\n",circ);
    area=3.14*r*r;
    printf("area=%d",area);
    
    
    return 0;
}
