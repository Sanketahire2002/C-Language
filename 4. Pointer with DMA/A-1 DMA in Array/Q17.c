/*
Q 17. Write a program in C to find the second largest element in an array. (Using Dynamic Memory Allocation)
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,i,max,sec;
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
	
	sec=*ptr;
	for(i=1;i<n;i++)
		if(sec>*(ptr+i))
			sec=*(ptr+i);
		
	for(i=0;i<n;i++)
	{
		if(*(ptr+i) > sec && *(ptr+i)!=max)
			sec=*(ptr+i);
	}
	
	printf("\nSecond Largest element in array = %d",sec);
}