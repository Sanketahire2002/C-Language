/*
Q 8. Write a C program to store squares of the elements in the same array
*/
#include<stdio.h>
void main()
{
	int i,arr[10];
	i=0;
	while(i<10)
	{
		printf("Enter element at index %d : ",i);
		scanf("%d",&arr[i]);
		i++;
	}
	printf("Array = \t");
	i=0;
	while(i<10)
	{
		printf("%d\t",arr[i]);
		i++;
	}
	
	i=0;
	while(i<10)
	{
		arr[i]=arr[i]*arr[i];
		i++;
	}
	printf("\nSquare of Array = ");
	i=0;
	while(i<10)
	{
		printf("%d\t",arr[i]);
		i++;
	}
}