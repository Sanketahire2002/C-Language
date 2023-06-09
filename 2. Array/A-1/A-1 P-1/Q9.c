/*
Q 9. Write a program in C to print all unique elements in an array.
*/
#include<stdio.h>
void main()
{
	int i,j,count,arr[10];
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
	printf("\nUnique Elements : ");
	for(i=0;i<10;i++)
	{
		count=0;
		for(j=0;j<10 && count<=1;j++)
		{
			if(arr[i] == arr[j])
				count++;
		}
		if(count == 1)
			printf("%d\t",arr[i]);
	}
}