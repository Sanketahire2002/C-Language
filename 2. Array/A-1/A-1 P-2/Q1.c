/*
Q 1. Write a program in C to delete an element at desired position from an array.
*/
#include<stdio.h>
void main()
{
	int i,j,flag,n,arr[10];
	i=0;
	while(i<10)
	{
		printf("Enter element at index %d : ",i);
		scanf("%d",&arr[i]);
		i++;
	}
	printf("Array =\t\t");
	i=0;
	while(i<10)
	{
		printf("%d\t",arr[i]);
		i++;
	}
	printf("\nEnter element which you want to delete from array : ");
	scanf("%d",&n);
	
	i=0;
	flag=0;
	while(i<10)
	{
		if(arr[i] == n)
		{
			j=i+1;
			while(j<10)
			{
				arr[i]=arr[j];
				i++;
				j++;
			}
			printf("Element %d is deleted from array.",n);
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0)
		printf("Element %d is Not present in array.",n);
	
	if(flag==1)
	{
		printf("\nUpdated Array = ");
		i=0;
		while(i<10-1)
		{
			printf("%d\t",arr[i]);
			i++;
		}
	}
	
}