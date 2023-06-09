#include<stdio.h>

struct student
{
    int roll;
    char* name;
    char* mobileno;
    char* prn;
    int id;
}Sanket;

void main()
{
    printf("Structure Assignment.");
    // Structure is declared Globally. So we can direct accesss its members or fields in all functions in our file
    Sanket.roll=10;
    Sanket.name="Sanket";
    Sanket.mobileno="1234567890";
    Sanket.prn="ABC12345";
    Sanket.id=5000;
}