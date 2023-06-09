#include "stdio.h"
#define a 5
#define b 2+3
#define c (2+3)
#define d 2+3
#define sum(x,y) (x+y)
#define max(x,y) x>y?x:y
#define min(x,y) x<y?x:y
#define sqr(a) (a*a)
#define cube(a) (a*a*a)

void main()
{
    int z;
    int x=10;
    int y=20;
    printf("a*a = %d",a*a);
    printf("\nb*b = %d",b*b);
    printf("\nc*c = %d",c*c);
    printf("\nd*d = %d",(d)*(d));

    z=sum(x,y);
    printf("\nSum = %d",z);

    z=max(x,y);
    printf("\nMax. = %d",z);

    z=min(x,y);
    printf("\nMin. = %d",z);

    z=sqr(5);
    printf("\nSquare = %d",z);

    z=cube(5);
    printf("\nCube = %d",z);
}