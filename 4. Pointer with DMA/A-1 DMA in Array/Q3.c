/*
Q 3. Write a C program to search given element in 1-D array using binary search method (Use Dynamic Memory Allocation to represent an array).
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,i,j,s,flag;
    int* ptr=NULL;

    printf("How many elements you want to insert in array : ");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("Enter %d element : ",i+1);
        scanf("%d",ptr+i);
    }

    printf("Array :  ");
    for(i=0;i<n;i++)
        printf("%d\t",*(ptr+i));
	
	printf("\nWhich element you want to search :  ");
    scanf("%d",&s);
	
	flag=0;
	j=n-1;
	for(i=0;i<n/2 || j=i;i++)
	{
		if(*(ptr+i)==s || *(ptr+j)==s)
		{
			if(*(ptr+i)==s)
				printf("Element is present at index %d.",i);
			else
				printf("Element is present at index %d.",j);
			flag=1;
		}
		j--;
	}
	if(flag==0)
		printf("Element is NOT present in Array.");
}