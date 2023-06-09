/*
Q 22. Write a C program to store squares of the elements in the same array (Using Dynamic Memory Allocation)
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
    
    for(i=0;i<n;i++)
        *(ptr+i)=*(ptr+i)**(ptr+i);

     printf("\nSquared Array :  ");
    for(i=0;i<n;i++)
        printf("%d\t",*(ptr+i));
}