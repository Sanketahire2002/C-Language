/*
Q 4. Write a C program to sort first half of array in ascending order and second half of array in descending order.
*/
#include<stdio.h>
void main()
{
	int i,j,temp,arr[10];
	int z;
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
	
	// Ascending Order by Shifting Method
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(arr[i] > arr[j])			// Selection Sort
			{
				temp=arr[j];			// Shifting
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	
	// Descending Order by Shifting Method
	for(i=5;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[i] < arr[j])			// Selection Sort
			{
				temp=arr[j];			// Shifting
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	
	printf("\nSorted Array =");
	for(i=0;i<10;i++)
		printf("\t%d",arr[i]);
}