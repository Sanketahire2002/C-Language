/*
Q 1. Write a C program to to represent 1-D array using Dynamic Memory Allocation.
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,i;
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
}