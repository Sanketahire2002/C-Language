#include<stdio.h>

struct student
{
    int roll;
    char* name;
    char* mobileno;
    char* prn;
    int id;
}Sanket={10,"Sanket","1234567890"};

void main()
{
    printf("Structure Retrival.");
    // Structure is declared Globally. So we can direct accesss its members or fields in all functions in our file
    printf("\nRoll Number = %d",Sanket.roll);
    printf("\nName = %s",Sanket.name);
    printf("\nMobile Number = %s",Sanket.mobileno);
    printf("\nPRN = %s",Sanket.prn);
    printf("\nID = %d",Sanket.id);
}