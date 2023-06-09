// 2-D Array Representation using DMA

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,row,col;
	int** ptr=NULL;
	
	printf("Enter number of rows : ");
	scanf("%d",&row);
	printf("Enter number of columns : ");
	scanf("%d",&col);
	
	ptr=(int**)malloc(row*sizeof(int*));
	
	for(i=0;i<row;i++)
	{
		*(ptr+i)=(int*)malloc(col*sizeof(int));
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter element at position %d %d in Array : ",i,j);
			scanf("%d",*(ptr+i)+j);
		}
	}
	
	printf("Matrix using DMA : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\t%d",*(*(ptr+i)+j));
		}
		printf("\n");
	}
}