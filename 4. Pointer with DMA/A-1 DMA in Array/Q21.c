/*
Q 21. Write a C Program to Find 2 Elements in the Array such that Difference between them is Largest (Using Dynamic Memory Allocation)
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,i,max,min;
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
	
	max=*ptr;
	for(i=1;i<n;i++)
		if(max<*(ptr+i))
			max=*(ptr+i);
	
	min=*ptr;
	for(i=1;i<n;i++)
		if(min>*(ptr+i))
			min=*(ptr+i);
		
	printf("\nThe elements %d and %d in array whose largest difference is %d.",max,min,max-min);
}