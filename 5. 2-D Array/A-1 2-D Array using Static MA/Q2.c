/*
Q 2. Write a C program to subtract two matrices in third matrix (Using Static memory Allocation).
*/

#include<stdio.h>
void main()
{
	int arr[100][100],brr[100][100],crr[100][100];
	int row,col,i,j;
	
	printf("Enter number of Rows : ");
	scanf("%d",&row);
	printf("Enter number of Columns : ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter element at position %d %d in Matrix 1: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("............................................\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter element at position %d %d in Matrix 2: ",i,j);
			scanf("%d",&brr[i][j]);
		}
	}
	
	printf("Matrix 1 :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\t%d",arr[i][j]);
		}
		printf("\n");
	}
	printf("Matrix 2 :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\t%d",brr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			crr[i][j]=arr[i][j] - brr[i][j];
		}
	}
	
	printf("Substraction of Matrix 1 & 2 :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\t%d",crr[i][j]);
		}
		printf("\n");
	}
}