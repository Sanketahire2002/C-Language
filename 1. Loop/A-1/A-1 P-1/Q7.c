/*
Q 7. Write a C program to find sum of all even numbers between 1 to n
*/

#include<stdio.h>

void main()
{
	int n,i,sum;
	printf("Enter n= ");
	scanf("%d",&n);
	sum=0;
	i=2;
	while(i <= n)
	{
		if(i%2 ==0 )
			sum=sum+i;
		
		i=i+2;
	}
	printf("Sum = %d",sum);
}