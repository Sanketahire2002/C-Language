/*
Q 15. Write C program to check two matrices are identical or not.
*/
#include<stdio.h>
void main()
{
	int arr[100][100],brr[100][100];
	int row,col,i,j,flag;
	
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
	
	flag=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(arr[i][j]!=brr[i][j])
			{
				printf("Two matrices are not Identical.");
				flag=1;
				break;
			}
		}
		if(flag==1)
			break;
	}
	if(flag==0)
		printf("Two matrices are Identical.");
	
}