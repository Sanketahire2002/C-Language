#include<stdio.h>
#define per 90
#define add(a,b) a+b
#define min 5
#define cube
#define x 100
void main()
{
    #if per==100
        printf("Topper");
        printf(" Student.");

    #elif per>80
        printf("Second Topper");
        printf(" Student.");

    #elif per>40
        printf("Middle Class Students.");
    
    else 
        printf("Fail.");

    #endif
    
    #ifdef add
        printf("\nAddition = %d",add(10,20));

    #endif

    #ifdef sub
        printf("\nAddition = %d",sub(10,20));

    #endif

    #ifndef max
        #define max 100
        printf("\nMax = %d",max);
    
    #endif

    #ifndef min
        #define min 50
        printf("\nMin = %d",min);
    
    #endif

    #ifndef sqr
        #define sqr(a) (a*a)
        printf("\nSquare = %d",sqr(5));
    
    #endif

    #ifndef cube
        #define cube(a) (a*a*a)
        printf("\nCube = %d",cube(5));
    
    #endif

    printf("\nx = %d",x);
    #undef x
        #define x 500
    printf("\nx = %d",x);

    #ifndef y
        #error y is not defined.
    #endif

}