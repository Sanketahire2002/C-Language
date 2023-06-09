/*
Q 3. Write a c program to check whether given matrix is upper triangular or not (Using Static Memory Allocation).
*/
#include<stdio.h>
void main()
{
	int arr[100][100];
	int row,col,i,j,flag;
	
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
	
	flag=0;
	for(i=1;i<row;i++)
	{
		for(j=0;j<i;j++)
		{
			if(arr[i][j]!=0)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			break;
	}
	if(flag==0)
		printf("Matrix is Upper Triangular Matrix.");
	else
		printf("Matrix is NOT Upper Triangular Matrix.");
	
}