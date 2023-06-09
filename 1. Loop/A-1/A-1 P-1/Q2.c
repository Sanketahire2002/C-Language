/*
Q 2. Write a C program to print all natural numbers from n to 1 - using while loop
*/

#include<stdio.h>

void main()
{
	int n;
	printf("Enter value of n = ");
	scanf("%d",&n);
	while(n != 0)
	{
		printf("%d\t",n);
		--n;
	}
}