/*
Q 8. Write a C program to check whether a number is Perfect number or Not.
*/
#include<stdio.h>
void main()
{
	int n,i,sum;
	printf("Enter n = ");
	scanf("%d",&n);
	sum=0;
	for(i=1 ; i <= n/2 ; i++)
	{
		if(n%i == 0)
			sum=sum+i;
	}
	if(sum == n)
		printf("Number is a Perfect Number.");
	else
		printf("Number is a Not Perfect Number.");
}