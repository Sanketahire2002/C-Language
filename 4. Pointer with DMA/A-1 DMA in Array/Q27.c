/*
Q 27. An array consist of Integers. Write a C program to count the number of elements less than, greater than and equal to zero. (Using Dynamic Memory Allocation)
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,i,less,great,zero;
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

    less=0;
    great=0;
    zero=0;
    for(i=0;i<n;i++)
    {
        if(*(ptr+i)<0)
        {    
            less++;
            continue;
        }

        if(*(ptr+i)>0)
        {    
            great++;
            continue;
        }
        
        if(*(ptr+i)==0)
        {
            zero++;
            continue;
        }
    }

    printf("\nLess than 0 : %d\nEqual to zero : %d\nGreater than zero : %d",less,zero,great);
}