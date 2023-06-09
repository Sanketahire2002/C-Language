/*
Q 13. Write a program in C to print all unique elements in an array. (Using Dynamic Memory Allocation)
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,i,j,count;
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

    printf("\nUnique elements in Array :");
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(*(ptr+i) == *(ptr+j))
                count++;
            if(count > 1)
                break;
        }
        if(count==1)
            printf("%d\t",*(ptr+i));
    }
}