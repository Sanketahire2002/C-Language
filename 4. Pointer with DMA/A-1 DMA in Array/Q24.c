/*
Q 24. Write C Program to Find if a given Integer X appears more than N/2 times in a Sorted Array of N Integers (Using Dynamic Memory Allocation)
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,n,temp,count;
	int* ptr=NULL;
	char ch;
	
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
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(ptr+i) > *(ptr+j))
			{
				temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
	}
	
	// We take sorted to reduce time complexity each time. In sorted array it is easy to count number of elements than unsorted array
	
	printf("\nSorted Array :");
	for(i=0;i<n;i++)
	{
		printf("   %d",*(ptr+i));
	}
	
	printf("\nElements appears more than n/2 (%d/2=%d) times in sorted array :",n,n/2);
	for(i=0;i<n;i++)
	{
		temp=*(ptr+i);
		count=0;
		while(temp==*(ptr+i))
		{
			count++;
			i++;
		}
		if(count > n/2)
		{
			printf("   %d",temp);
		}
	}
}