/*
Q 18. Write a C Program to Find the Number of Elements in an Array (Using Dynamic Memory Allocation)
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n,size;
	int* ptr=NULL;
	
	printf("Enter number of elements : ");
	scanf("%d",&n);
	
	ptr=(int*)malloc(n*sizeof(int));
		
	size=sizeof(ptr);
	printf("\nSize of array with Base address ptr = %d",size);
}