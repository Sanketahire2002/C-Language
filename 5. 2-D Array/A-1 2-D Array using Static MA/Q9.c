/*
Q 9.Write a C Program to Search Element in a 2D Array (Using Static Memory Allocation).
*/
#include<stdio.h>
void main()
{
	int arr[100][100];
	int row,col,i,j,n,flag;
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
	
	do
	{
		printf("Enter element to search : ");
		scanf("%d",&n);
		flag=0;
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				if(n==arr[i][j])
				{
					printf("Element is found at position %d %d.",i,j);
					flag=1;
					break;
				}
			}
			if(flag==1)
				break;
		}
		if(flag==0)
			printf("Element NOT present.");
	
		printf("\nDo you want to search again ? (y or n) :");
		scanf(" %c",&ch);
		}while(ch=='y');
}