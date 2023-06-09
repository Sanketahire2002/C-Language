/*
Q 26. Write a C program to find the maximum sum of a subsequent numbers in given array. (Using Dynamic Memory Allocation)
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,i,sum,max,n1,n2,t1,t2;
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

    n1=*(ptr+0);
    n2=*(ptr+1);
    max=n1+n2;
    t1=n1;
    t2=n2;
    for(i=1;i<n-1;i++)
    {
        n1=*(ptr+i);
        n2=*(ptr+(i+1));
        sum=n1+n2;
        if(max < sum)
        {
            max=sum;
            t1=n1;
            t2=n2;
        }
    }
    printf("\nMaximum sum of subsequent elements %d and %d is %d.",t1,t2,max);
}