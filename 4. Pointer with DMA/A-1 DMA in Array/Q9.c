/*
Q 9. Write a C program to copy the elements of one array into another array. (Using Dynamic Memory Allocation)
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,i;
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

    int *copy=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
        *(copy+i)=*(ptr+i);

    printf("\nCopied Array :  ");
    for(i=0;i<n;i++)
        printf("%d\t",*(copy+i));
}