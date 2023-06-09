/*
Q 6. Write a C program to find sujm of all natural numbers between 1 to n
*/

#include<stdio.h>

void main()
{
	int n,i=1;
	int sum=0;
	printf("Enter n = ");
	scanf("%d",&n);
	while(i <= n)
	{
		sum=sum+i;
		i++;
	}
	printf("Sum of natural numbers from 1 to %d = %d",n,sum);
}