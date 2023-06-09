/*
Q 1. Write a C program to find the sum of all the elements of an array.
*/
#include<stdio.h>
void main()
{
	int i,sum,arr[10];
	for(i=0;i<10;i++)
	{
		printf("Enter element at index %d : ",i);
		scanf("%d",&arr[i]);
	}
	printf("Array =");
	for(i=0;i<10;i++)
	{
		printf("\t%d",arr[i]);
	}
	sum=0;
	for(i=0;i<10;i++)
	{
		sum=sum+arr[i];
	}
	printf("\nSum = %d",sum);
}