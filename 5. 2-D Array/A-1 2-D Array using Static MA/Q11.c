/*
Q 11. Write C Program to Find Sum of all Elements of a Matrix.
*/
#include<stdio.h>
void main()
{
	int arr[100][100];
	int row,col,i,j,sum;
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
	
	sum=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum=sum+arr[i][j];
		}
	}
	printf("Sum = %d",sum);
}