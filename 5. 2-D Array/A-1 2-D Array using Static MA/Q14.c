/*
Q 14. Write C Program to Read a Matrix and Print Diagonals.
*/
#include<stdio.h>
void main()
{
	int arr[100][100];
	int row,col,i,j,large,small;
	char ch;
	
	printf("Enter number of Rows & Columns : ");
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
	
	printf("Diagonal of Matrix :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==j)
				printf("\t%d",arr[i][j]);
			printf("\t");
		}
		printf("\n");
	}
}