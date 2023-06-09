/*
Q 3. Write a C program to calculate product of digits of a number.
*/
#include<stdio.h>
void main()
{
	int n,pro=1,i;
	printf("Enter n = ");
	scanf("%d",&n);
	while(n > 0)
	{
		i=n%10;
		pro=pro*i;
		n=n/10;
	}
	printf("Sum = %d",pro);
}