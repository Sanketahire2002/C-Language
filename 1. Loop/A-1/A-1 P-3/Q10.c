/*
Q 10. Write a C program to check whether a number is Strong number or not.
*/
#include<stdio.h>
void main()
{
	int n,n1,sum,r,i,fact;
	printf("Enter n = ");
	scanf("%d",&n);
	n1=n;
	sum=0;
	while(n1>0)
	{
		r=n1%10;
		n1=n1/10;
		fact=1;
		for(i=2; i <= r ; i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
	}
	if(sum == n)
		printf("Number is a Strong Number.");
	else
		printf("Number is a Not Strong Number.");		
}