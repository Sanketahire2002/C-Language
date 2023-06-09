/*
Q 20. Write a C Program to Print the Alternate Elements in an Array (Using Dynamic Memory Allocation)
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

    printf("\nAlterate Array :  ");
    for(i=0;i<n;i=i+2)
        printf("%d\t",*(ptr+i));

    printf("\nAlterate Array :  ");
    for(i=1;i<n;i=i+2)
        printf("%d\t",*(ptr+i));
}