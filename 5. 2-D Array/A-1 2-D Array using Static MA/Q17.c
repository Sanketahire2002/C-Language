/*
Q 17. Write C program to interchange the columns in the matrix.(take column number as input to interchange eg. C1 with C3 or C2 with C3).
*/
#include<stdio.h>
void main()
{
	int arr[100][100];
	int row,col,i,j,c1,c2,temp;
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
	scanf("%d",&c1);
	printf("Enter 2nd Row number :");
	scanf("%d",&c2);
	
	for(i=0;i<row;i++)
	{
		temp=arr[i][c1-1];
		arr[i][c1-1]=arr[i][c2-1];
		arr[i][c2-1]=temp;
	}
	
	printf("After Interchanging Columns %d and %d in Matrix :\n",c1,c2);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\t%d",arr[i][j]);
		}
		printf("\n");
	}
}