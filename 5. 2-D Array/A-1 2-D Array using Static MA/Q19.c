/*
Q 19. Write C program to arrange column elements in ascending order.
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
	
	for(i=0;i<col;i++)
	{
		for(j=0;j<row-1;j++)
		{
			for(k=j+1;k<row;k++)
			{
				if(arr[j][i] > arr[k][i])
				{
					temp=arr[j][i];
					arr[j][i]=arr[k][i];
					arr[k][i]=temp;
				}
			}
		}
	}
	
	printf("Ascending Columns in Matrix :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\t%d",arr[i][j]);
		}
		printf("\n");
	}
}
