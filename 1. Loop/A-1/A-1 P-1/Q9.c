/*
Q 9. Write a C program to print multiplication table of any number
*/

#include<stdio.h>

void main()
{
	int n,i,tab;
	printf("Enter n = ");
	scanf("%d",&n);
	printf("\n");
	for(i=1 ; i<=10 ;i++)
	{
		tab=n*i;
		printf("%d * %d = %d\n",n,i,tab);
	}
}