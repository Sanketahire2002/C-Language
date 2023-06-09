/*
Q 11. Write a C program to sort only even numbers in given array. (Using Dynamic Memory Allocation)
	Eg.
		Input: 45 8 75 29 5 49 56 22 14 497 288 18 2
		Output: 45 2 75 29 5 49 8 14 18 497 22 56 288
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,i,j,temp;
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
	
	for(i=0;i<n-1;i++)
	{
		if(*(ptr+i)%2==0)
			for(j=i+1;j<n;j++)
			{
				if(*(ptr+j)%2==0 && *(ptr+i) > *(ptr+j))
				{
					temp=*(ptr+j);
					*(ptr+j)=*(ptr+i);
					*(ptr+i)=temp;
				}
			}
	}
	
	printf("\nSorted Array :  ");
    for(i=0;i<n;i++)
        printf("%d   ",*(ptr+i));
}