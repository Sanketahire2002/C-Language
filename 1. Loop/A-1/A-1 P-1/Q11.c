/*
Q 11. Write a C program to find first and last digit of a number
*/

#include<stdio.h>

void main()
{
	int n,last;
	printf("Enter n = ");
	scanf("%d",&n);
	last=n%10;
	while(n > 10)
		n=n/10;
	printf("First digit = %d",n);	
	printf("\nLast digit = %d",last);
}