#include<stdio.h>

#pragma pack(1)

//#pragma pack()
//#pragma pack(2)
//#pragma pack(4)
//#pragma pack(6)
//#pragma pack(8)
//#pragma pack(16)


void main()
{
    struct Demo1
    {
        int a;
        char b;
        int c;
        char d;
    };
    struct Demo1 d1;

    printf("Size of d1 = %d",sizeof(d1));

    struct Demo2
    {
        int a;
        int b;
        char c;
        char d;
    };
    struct Demo2 d2;

    printf("\nSize of d2 = %d",sizeof(d2));

    struct Demo3
    {
        double a;
        char b;
        int c;
        short int d;
    };
    struct Demo3 d3;

    printf("\nSize of d3 = %d",sizeof(d3));
}