/*
Q 3. Write a C program to print all Prime numbers between 1 to n.
*/
#include<stdio.h>

void main()
{
	int n,i,prime,j,flag;
	printf("Enter numbr n = ");
	scanf("%d",&n);
	i=2;
	printf("Prime numbers = ");
	for(i=2 ;i<=n;i++)
	{
		flag=0;
		for(j=2;j<=i/2;j++)
		{
			prime=i%j;
			if(prime == 0)
				flag=1;
		}
		if(flag==0)
			printf("  %d  ",i);
	}
}