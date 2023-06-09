/*
Q 5. Write a C program to check whether a number is palindrome or not.
*/

#include<stdio.h>
void main()
{
	int n,i,sum,n2;
	printf("Enter number n = ");
	scanf("%d",&n);
	sum=0;
	n2=n;
	while(n2 > 0)
	{
		i=n2%10;
		sum=sum*10 + i;
		n2=n2/10;
	}
	if(sum == n)
		printf("Number is Palindrome.");
	else
		printf("Number is Not Palindrome.");
}