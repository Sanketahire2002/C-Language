/*
Q 8.Write a C Program to find the transpose of a given matrix (Using Static Memory Allocation).
*/
#include<stdio.h>
void main()
{
	int arr[100][100],brr[100][100];
	int row,col,i,j,temp;
	
	printf("Enter number of Rows Matrix : ");
	scanf("%d",&row);
	printf("Enter number of Columns Matrix : ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter element at position %d %d in Matrix : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("Matrix :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\t%d",arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			brr[j][i]=arr[i][j];
		}
	}	
	
	printf("Transpose of Matrix :\n");
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("\t%d",brr[i][j]);
		}
		printf("\n");
	}
}