/*
Q 3. Write a C program that return the positions of the pallindrome element in array.
*/
#include<stdio.h>
void main()
{
	int i,rem,pall,temp,arr[10];
	for(i=0;i<10;i++)
	{
		printf("Enter element at index %d : ",i);
		scanf("%d",&arr[i]);
	}
	printf("Array =");
	for(i=0;i<10;i++)
	{
		printf("\t%d",arr[i]);
	}
	printf("\nPallindrome element is present at index :");
	for(i=0;i<10;i++)
	{
		temp=arr[i];
		pall=0;
		while(temp > 0)
		{
			rem=temp%10;
			temp=temp/10;
			pall=pall*10 + rem;
		}
		if(arr[i] == pall)
			printf("\t%d",i);
	}
}