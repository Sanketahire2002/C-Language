#include<stdio.h>

struct student
{
    int roll;
    char* name;
    char* mobileno;
    char* prn;
    int id;
}Sanket={10,"Sanket","1234567890","ABC12345",5000} , Aniket={13,"Aniket","3699633690"};   // Initialization

struct student Rahul={15,"Rahul","7778889990","ZAE56987",7000} , Ram={25} ;

struct student Tommy={'A'};     // Automatically type casted implicitely here

struct student Jerry={(int)3.2};    // Explicitely type casted

void main()
{
    printf("Structure Initialization.");
}