/*
Q 2. Write a C program to sort 1-D array in ascending order using Dynamic Memory Allocation.
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,i,j,temp;
    int *ptr=NULL;

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
        for(j=i+1;j<n;j++)
        {
            if(*(ptr+i) > *(ptr+j))
            {
                temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }

    printf("\nAscending Sorted Array :  ");
    for(i=0;i<n;i++)
        printf("%d\t",*(ptr+i));

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(ptr+i) < *(ptr+j))
            {
                temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }

    printf("\nDescending Sorted Array :  ");
    for(i=0;i<n;i++)
        printf("%d\t",*(ptr+i));
}