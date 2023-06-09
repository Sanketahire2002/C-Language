/*
Q 12. Write C Program to Find Largest Element in a Matrix.
*/
#include<stdio.h>
void main()
{
	int arr[100][100];
	int row,col,i,j,large,small;
	char ch;
	
	printf("Enter number of Rows : ");
	scanf("%d",&row);
	printf("Enter number of Columns : ");
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
	
	large=arr[0][0];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(large < arr[i][j])
				large=arr[i][j];
		}
	}
	printf("Largest Number = %d",large);
	
	small=arr[0][0];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(small > arr[i][j])
				small=arr[i][j];
		}
	}
	printf("\nSmallest Number = %d",small);
}