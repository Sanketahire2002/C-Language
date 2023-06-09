/*
Q 12. Write a C program to print tables from 2 to n
*/
#include<stdio.h>
void main()
{
	int n,i,j,tab;
	printf("Upto which numbr you want to printf tables : ");
	scanf("%d",&n);
	for(i=1; i<=10 ;i++)
	{
		for(j=2 ; j<=n ;j++)
		{
			tab=j*i;
			printf("%d\t",tab);
		}
		printf("\n");
	}	
}