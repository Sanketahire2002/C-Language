/*
Q 18. Write C program to arrange row elements in ascending order.
*/
#include<stdio.h>
void main()
{
	int arr[100][100];
	int row,col,i,j,k,temp;
	
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
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col-1;j++)
		{
			for(k=j+1;k<col;k++)
			{
				if(arr[i][j] > arr[i][k])
				{
					temp=arr[i][k];
					arr[i][k]=arr[i][j];
					arr[i][j]=temp;
				}
			}
		}
	}
	
	printf("Ascending Rows in Matrix :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\t%d",arr[i][j]);
		}
		printf("\n");
	}
}