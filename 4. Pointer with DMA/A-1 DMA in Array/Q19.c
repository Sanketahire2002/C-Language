/*
Q 19. Write a C Program to Check Array bounds while Inputing Elements into the Array (Using Dynamic Memory Allocation)
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n;
	int* ptr=NULL;
	
	printf("Enter number of elements : ");
	scanf("%d",&n);
	
	ptr=(int*)malloc(n*sizeof(int));
	
	i=0;
	while(1)
	{
		if(i==n)
		{
			printf("Array bounds while Inputing Elements into the Array.");
			break;
		}
		printf("Enter element at index %d : ",i);
		scanf("%d",ptr+i);
		i++;
	}
	
	printf("\nArray :");
	for(i=0;i<n;i++)
	{
		printf("   %d",*(ptr+i));
	}
	
}