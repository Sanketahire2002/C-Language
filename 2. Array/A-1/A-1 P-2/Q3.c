/*
Q 3. Write a program in C to find the second largest element in an array.
*/
#include<stdio.h>
void main()
{
	int i,max,sec,min,arr[5];
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("Enter a Element at index %d in Array = ",i);
		scanf("%d",&arr[i]);
	}
	printf("Array =");
	for(i=0;i<5;i++)
	{
		printf("\t%d",arr[i]);
	}
	max=arr[0];
	for(i=1;i<5;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	min=arr[0];
	for(i=1;i<5;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	sec=min;
	for(i=0;i<5;i++)
	{
		if(arr[i]!=max && sec<arr[i])
		{
			sec=arr[i];			
		}
		
	}
	printf("\nSecond Largest Number = %d",sec);
}