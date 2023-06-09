/*
Q 8.Write a C program to find power of a number using for loop.
*/
#include<stdio.h>

void main()
{
	int n,p,i,result=1;
	printf("Enter number n = ");
	scanf("%d",&n);
	printf("Enter Power of %d = ",n);
	scanf("%d",&p);
	for(i=1;i<=p;i++)
	{
		result=result*n;
	}
	printf("%d raised to %d = %d",n,p,result);
}