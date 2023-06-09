/*
Q 4. Write a C program to enter a number and print its reverse.
*/
#include<stdio.h>
void main()
{
	int n,i,sum;
	printf("Enter number n = ");
	scanf("%d",&n);
	sum=0;
	while(n > 0)
	{
		i=n%10;
		sum=sum*10 + i;
		n=n/10;
	}
	printf("Reverse Number = %d",sum);
}