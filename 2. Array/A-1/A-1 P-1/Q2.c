/*
Q 2. An array consist of Integers. Write a C program to count the number of elements less than, greater than and equal to zero.
*/
#include<stdio.h>
void main()
{
	int i,less,great,zero,arr[10];
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
	less=0;
	great=0;
	zero=0;
	for(i=0;i<10;i++)
	{
		if(arr[i]==0)
			zero++;
		if(arr[i]<0)
			less++;
		if(arr[i]>0)
			great++;
	}
	printf("\nNumbers Less than 0 = %d\nNumbers equal to 0 = %d\nNumbers Greater than 0 = %d",less,zero,great);
}