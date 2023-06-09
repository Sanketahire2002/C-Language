/*
Q6. Write a C program to sort only even numbers in given array.
	Eg.
		Input: 45 8 75 29 5 49 56 22 14 497 288 18 2
		Output: 45 2 75 29 5 49 8 14 18 497 22 56 288
*/
#include<stdio.h>
void main()
{
	int i,j,k,l,temp,min,arr[13];
	for(i=0;i<13;i++)
	{
		printf("Enter element at index %d : ",i);
		scanf("%d",&arr[i]);
	}
	printf("Array =\t");
	for(i=0;i<13;i++)
	{
		printf("\t%d",arr[i]);
	}
	for(i=0;i<12;i++)
	{
		if(arr[i]%2 == 0)
		{
			for(j=i+1;j<13;j++)
			{
				if(arr[j]%2==0 && arr[i] > arr[j])
				{
					temp=arr[j];
					arr[j]=arr[i];
					arr[i]=temp;
				}
			}
		}
	}
	/*
	l=0;
	while(l<12)
	{
		for(l=l;l<13;l++)
		{
			if(arr[l]%2==0)
			{
				min=arr[l];
				k=l;
				break;
			}
		}
		for(j=l+1;j<13;j++)
		{
			if(arr[j]%2==0 && min>arr[j])
			{
				min=arr[j];
				k=j;
			}	
		}
		temp=arr[k];
		arr[k]=arr[l];
		arr[l]=temp;
		l++;
	}*/
	printf("\nSorted Array =");
	for(i=0;i<13;i++)
	{
		printf("\t%d",arr[i]);
	}
}