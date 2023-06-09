/*
Q 7.Write C program to check if the matrix is symmetric or not (Using Static Memory Allocation).
*/
#include<stdio.h>
void main()
{
	int arr[100][100];
	int row,col,i,j,flag;
	
	printf("Enter number of Rows & Columns of Matrix: ");
	scanf("%d",&row);
	col=row;
	
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
	
	flag=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(arr[i][j] != arr[j][i])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			break;
	}
	if(flag==0)
		printf("Matrix is Symmetric Matrix.");
	else
		printf("Matrix is NOT Symmetric Matrix.");
	
	flag=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(arr[i][j] != -arr[j][i])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			break;
	}
	if(flag==0)
		printf("\nMatrix is Skew-Symmetric Matrix.");
	else
		printf("\nMatrix is NOT Skew-Symmetric Matrix.");
}