/*
Q 5. Write a C program to reverse an given 1-D without using sorting algorithms. (Use Dynamic Memory Allocation to represent an array).
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,n,temp;
	int* ptr=NULL;
	
	printf("Enter number of elements : ");
	scanf("%d",&n);
	
	ptr=(int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
		printf("Enter element at index %d : ",i);
		scanf("%d",ptr+i);
	}
	
	printf("Array :");
	for(i=0;i<n;i++)
	{
		printf("   %d",*(ptr+i));
	}
	
	j=n-1;
	for(i=0;i<j;i++)
	{
		temp=*(ptr+i);
		*(ptr+i)=*(ptr+j);
		*(ptr+j)=temp;
		j--;
	}
	
	printf("\nReversed Array :");
	for(i=0;i<n;i++)
	{
		printf("   %d",*(ptr+i));
	}
}