/*
Q 23. Write C Program to Find the two Elements such that their Sum is Closest to given number (Using Dynamic Memory Allocation)
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,close,i,j,sum,diff,newdiff,i1,i2;
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
	
	printf("\nEnter Number : ");
	scanf("%d",&close);
	
	i1=0;
	i2=0;
	sum=2**ptr;	// sum = *ptr + *ptr ;
	diff=sum>close?(sum-close):(close-sum);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=*(ptr+i) + *(ptr+j);
			newdiff=sum>close?(sum-close):(close-sum);
			if(diff>newdiff)
			{
				diff=newdiff;
				i1=i;
				i2=j;
			}
		}
	}
	
	printf("\nThe two elements %d and %d whose sum %d is closest to given number %d with difference %d.",*(ptr+i1),*(ptr+i2),*(ptr+i1)+*(ptr+i2),close,diff);
}