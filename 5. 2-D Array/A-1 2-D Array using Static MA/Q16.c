/*
Q 16. Write C program to interchange the rows in the matrix.(take row number as input to interchange eg. R1 with R3 or R2 with R3).
*/
#include<stdio.h>
void main()
{
	int arr[100][100];
	int row,col,i,j,r1,r2,temp;
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
	
	printf("Enter 1st Row number :");
	scanf("%d",&r1);
	printf("Enter 2nd Row number :");
	scanf("%d",&r2);
	
	for(i=0;i<col;i++)
	{
		temp=arr[r1-1][i];
		arr[r1-1][i]=arr[r2-1][i];
		arr[r2-1][i]=temp;
	}
	
	printf("After Interchanging Rows %d and %d in Matrix :\n",r1,r2);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\t%d",arr[i][j]);
		}
		printf("\n");
	}
}