/*
Q 7. Write a program in C to separate odd and even integers in same array.
*/
#include<stdio.h>
void main()
{
	int i,j,temp,arr[10];
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
	
	// Sorting by Shifting Method
	j=9;
	for(i=0; i<=j ;i++)
	{
		if(arr[i]%2 != 0)
		{
			for(j=j;j>i;j--)
			{
				if(arr[j]%2 == 0)
				{					
					temp=arr[j];
					arr[j]=arr[i];
					arr[i]=temp;
					break;
				}
			}
		}
	}
	printf("\nSorted Array =");
	for(i=0;i<10;i++)
	{
		printf("\t%d",arr[i]);
	}
}