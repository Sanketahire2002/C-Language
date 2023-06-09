/*
Q 12. Write a program in C to separate odd and even integers in same array. (Using Dynamic Memory Allocation)
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
	j=n;
	for(i=0;i<=j;i++)
	{
		if(*(ptr+i)%2==0)
			for(j=j-1;j>i;j--)
				if(*(ptr+j)%2==1)
				{
					temp=*(ptr+i);
					*(ptr+i)=*(ptr+j);
					*(ptr+j)=temp;
					break;
				}				
	}
	
	printf("\nSorted Array :  ");
    for(i=0;i<n;i++)
        printf("%d   ",*(ptr+i));
}