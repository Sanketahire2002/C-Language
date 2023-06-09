/*
Q 6.Write a C Program to multiply two Matrices in third matrix(Using Static Memory Allocation).
*/
#include<stdio.h>
void main()
{
	int arr[100][100],brr[100][100],crr[100][100];
	int row,col,mul,i,j,k,sum;
	
	printf("Enter number of Columns of Matrix 1 & number of Rows of Matrix 2: ");
	scanf("%d",&mul);
	printf("Enter number of Rows of Matrix 1 : ");
	scanf("%d",&row);
	printf("Enter number of Columns of Matrix 2 : ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<mul;j++)
		{
			printf("Enter element at position %d %d in Matrix 1: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("............................................\n");
	for(i=0;i<mul;i++)
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
		for(j=0;j<mul;j++)
		{
			printf("\t%d",arr[i][j]);
		}
		printf("\n");
	}
	printf("Matrix 2 :\n");
	for(i=0;i<mul;i++)
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
			sum=0;
			for(k=0;k<mul;k++)
			{
				sum=sum+arr[i][k]*brr[k][j];
			}
			crr[i][j]=sum;
		}
	}
	
	printf("Multiplication of Matrix 1 & 2 :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\t%d",crr[i][j]);
		}
		printf("\n");
	}
}