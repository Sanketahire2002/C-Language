//  Give Values to Members in Other Function
#include<stdio.h>

struct Demo         // Globally declared to accessible for all functions in that file
{
    int a,b,c;
}d;

void setvalue(struct Demo* var)
{
    var->a=10;
    var->b=20;
    var->c=30;
}

void main()
{
    printf("Give Values to Members in Other Function.");
    setvalue(&d);
    printf("\na = %d",d.a);
    printf("\nb = %d",d.b);
    printf("\nc = %d",d.c);
}