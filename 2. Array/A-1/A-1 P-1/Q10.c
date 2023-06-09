/*
Q 10. Write a program in C to insert New value in the array (sorted list ).
*/
#include<stdio.h>
void main()
{
	int i,j,n,temp,arr[11];
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
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr[i] > arr[j])			// Selection Sort
			{
				temp=arr[j];			// Shifting
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	printf("\nSorted Array =");
	for(i=0;i<10;i++)
	{
		printf("\t%d",arr[i]);
	}
	printf("\nEnter number to insert in array : ");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(arr[i] > n)
		{
			for(j=10; j > i ;j--)
			{
				arr[j]=arr[j-1];
			}
			arr[i]=n;
			break;
		}
	}
	printf("\nNew Sorted Array =");
	for(i=0;i<11;i++)
	{
		printf("\t%d",arr[i]);
	}
}