/*
Q 9. Write a C program to find all factors of a number.
*/

#include<stdio.h>

void main()
{
	int n,i,fact;
	printf("Enter number n = ");
	scanf("%d",&n);
	printf("Factors = 1 ,");
	
	for(i=2; i <= n/2 ; i++)
	{
		fact=n%i;
		if(fact == 0)
			printf("%d ,",i);
	}
	printf("%d.",n);
}