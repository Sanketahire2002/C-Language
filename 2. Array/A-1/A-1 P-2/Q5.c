/*
Q 5. Write a C Program to Print the Alternate Elements in an Array
*/
#include<stdio.h>
void main()
{
	int i,arr[10];
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("Enter a Element at index %d in Array = ",i);
		scanf("%d",&arr[i]);
	}
	printf("Array =\t");
	for(i=0;i<10;i++)
	{
		printf("\t%d",arr[i]);
	}
	printf("\nAltered Array =");
	for(i=0;i<10;i++)
	{
		if(i%2==0)
			printf("\t%d",arr[i]);
	}
	printf("\nAltered Array =");
	for(i=0;i<10;i++)
	{
		if(i%2!=0)
			printf("\t%d",arr[i]);
	}
}