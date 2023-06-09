/*
Q 7. Write a C program that return the positions of the pallindrome element in array (Using Dynamic Memory Allocation)
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,i,rev,rem,temp;
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
	
	printf("\nPositions of Pallindrome elements :  ");
	for(i=0;i<n;i++)
	{
		rev=0;
		temp=*(ptr+i);
		while(temp>0)
		{
			rem=temp%10;
			temp=temp/10;
			rev=rev*10+rem;
		}
		if(rev == *(ptr+i))
			printf("%d   ",i);
	}
}