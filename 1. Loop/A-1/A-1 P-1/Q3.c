/*
Q 3. Write a C program to print all alphabets from a to z. - using while loop
*/

#include<stdio.h>

void main()
{
	int i;
	printf("A to Z = ");
	for(i=65 ;i<=90 ;i++)
		printf("%c\t",i);
	
	printf("\na to z = ");
	for(i='a' ;i<='z' ;i++)
		printf("%c\t",i);
}