/*
Q 6. Write a C program to check whether a number is Armstrong number or Not.
*/
#include<stdio.h>
void main()
{
	int n,n1,n2,i,j,digit,r,sum,pro;
	printf("Enter n = ");
	scanf("%d",&n);
	n1=n;
	n2=n;
	i=0;
	sum=0;
	while(n1 > 0)
	{
		n1=n1/10;
		i++;
	}
	while(n2 > 0)
	{
		r=n2%10;
		n2=n2/10;
		pro=1;
		for(j=1; j <= i ;j++)
		{
			pro=pro*r;
		}
		sum=sum+pro;
	}
	if(sum == n)
		printf("Number is Armstrong.");
	else
		printf("Number is Not Armstrong.");
}