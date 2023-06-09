/*
Q 10. Write a C program to count number of digits in a number
*/

#include<stdio.h>

void main()
{
	int n,i=0;
	printf("Enter n = ");
	scanf("%d",&n);
	while(n >= 1)
	{
		n=n/10;
		i++;
	}
	printf("Number of digits = %d",i);
}
