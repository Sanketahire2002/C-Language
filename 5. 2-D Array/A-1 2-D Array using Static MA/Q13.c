/*
Q 13. Write C Program to Print Sum of Each Row and Column of given Matrix.(if matrix 3x3,o/p=> r1=_,r2=_,r3=_,c1=_,c2=_,c3=_)
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
	
	for(i=0;i<row;i++)
	{
		sum=0;
		for(j=0;j<col;j++)
		{
			sum=sum+arr[i][j];
		}
		printf("Sum of elements in Row %d = %d\n",i+1,sum);
	}
	for(i=0;i<col;i++)
	{
		sum=0;
		for(j=0;j<row;j++)
		{
			sum=sum+arr[j][i];
		}
		printf("Sum of elements in Column %d = %d\n",i+1,sum);
	}
}