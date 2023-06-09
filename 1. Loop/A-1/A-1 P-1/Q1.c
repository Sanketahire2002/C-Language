/*
Q 1. Write a C program to print all natural numbers from 1 to n - using while loop
*/

#include<stdio.h>

void main()
{
	int n;
	int i;
	printf("Enter value of n = ");
	scanf("%d",&n);
	i=1;
	while(i <= n)
	{
		printf("%d\t",i);
		i++;
	}
}