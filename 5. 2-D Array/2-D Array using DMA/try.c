// 2-D Array Representation using DMA

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,row,col,mul;
	int* ptr=NULL;
	
	printf("Enter number of rows : ");
	scanf("%d",&row);
	printf("Enter number of columns : ");
	scanf("%d",&col);
	mul=row*col;
	ptr=(int*)malloc(mul*sizeof(int));
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("index %d %d in address %d and %d: ",i,j,(ptr+(i+col*j)),((ptr+(i+col*j))-ptr)*4);
			scanf("%d",(ptr+(i+col*j)));
		}
	}
	
	printf("Matrix : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\t%d",*(ptr+(i+col*j)));
		}
		printf("\n");
	}
	free(ptr);
}