#include<stdio.h>
//#define y
void main()
{
    #ifndef y
        #error y is not defined.
    #endif

}