/*
Q 9. Write a C program to print all Perfect numbers between 1 to n.
*/
#include<stdio.h>
void main()
{
	int n,i,j,sum;
	printf("Enter n = ");
	scanf("%d",&n);
	printf("Perfect Number = ");
	for(j=1; j <= n ; j++)
	{
		sum=0;
		for(i=1 ; i <= j/2 ; i++)
		{
			if(j%i == 0)
				sum=sum+i;
		}
		if(sum == j)
			printf("  %d,",j);
	}
}