/*
Q 2. Write a C program to calculate sum of digits of a number.
*/
#include<stdio.h>
void main()
{
	int n,sum=0,i;
	printf("Enter n = ");
	scanf("%d",&n);
	while(n > 0)
	{
		i=n%10;
		sum=sum+i;
		n=n/10;
	}
	printf("Sum = %d",sum);
}