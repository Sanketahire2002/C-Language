/*
Q 4. Write a C program to find sum of all prime numbers between 1 to n.
*/
#include<stdio.h>

void main()
{
	int n,i,prime,j,flag,sum;
	printf("Enter numbr n = ");
	scanf("%d",&n);
	i=2;
	sum=0;
	printf("Prime numbers = ");
	for(i=2 ;i<=n;i++)
	{
		flag=0;
		for(j=2;j<=i/2;j++)
		{
			prime=i%j;
			if(prime == 0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("  %d  ",i);
			sum=sum+i;
		}
	}
	printf("\nSum = %d",sum);
}