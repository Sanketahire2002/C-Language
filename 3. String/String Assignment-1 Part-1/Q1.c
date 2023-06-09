/*
Q 1.Write a C program to accept string with multiple spaces from user and print as it is.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100];
	printf("Enter String =");
	fgets(str,sizeof(str),stdin);
	printf("Accepted String =%s",str);
	getch();
}