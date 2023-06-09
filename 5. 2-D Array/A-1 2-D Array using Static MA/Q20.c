/*
Q 20. Write C program to find the count of even numbers in matrix.
*/
#include<stdio.h>
void main()
{
	int arr[100][100];
	int row,col,i,j,even,odd;
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
	
	even=0;
	odd=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(arr[i][j]%2 == 0)
				even++;
			else
				odd++;
		}
	}	
	printf("Even = %d\nOdd = %d",even,odd);
}