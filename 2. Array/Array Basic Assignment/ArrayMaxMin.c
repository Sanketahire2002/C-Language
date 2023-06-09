/*
Q. Searching Maximum and Minimum Element in Array
*/
#include<stdio.h>
void main()
{
	int i,max,min,arr[10];
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("Enter a Element at index %d in Array = ",i);
		scanf("%d",&arr[i]);
	}
	printf("Array =");
	for(i=0;i<10;i++)
	{
		printf("\t%d",arr[i]);
	}
	max=arr[0];
	for(i=1;i<10;i++)
	{
		if(max<arr[i])
			max=arr[i];
	}
	printf("\nGreatest Number = %d",max);
	min=arr[0];
	for(i=1;i<10;i++)
	{
		if(min>arr[i])
			min=arr[i];
	}
	printf("\nSmallest Number = %d",min);
}