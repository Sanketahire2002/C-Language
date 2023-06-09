/*
Q 8. Write a C program to find sum of all odd numbers between 1 to n
*/

#include<stdio.h>

void main()
{
	int n,i,sum;
	printf("Enter n= ");
	scanf("%d",&n);
	sum=0;
	i=1;
	while(i <= n)
	{
		if(i%2 !=0 )
			sum=sum+i;
		
		i=i+2;
	}
	printf("Sum = %d",sum);
}