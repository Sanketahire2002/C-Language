/*
Q 5. Write a C program to copy the elements of one array into another array.
*/
#include<stdio.h>
void main()
{
	int i,sum,arr[10],copy[10];
	for(i=0;i<10;i++)
	{
		printf("Enter element at index %d : ",i);
		scanf("%d",&arr[i]);
	}
	printf("Array =\t");
	for(i=0;i<10;i++)
	{
		printf("\t%d",arr[i]);
	}
	for(i=0;i<10;i++)
	{
		copy[i]=arr[i];
	}
	printf("\nCopied Array =");
	for(i=0;i<10;i++)
	{
		printf("\t%d",copy[i]);
	}
}