/*
Q 25. Write C Program to Find Union & Intersection of 2 Arrays (Using Dynamic Memory Allocation)
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a,b,i,j,c,d,flag;
	
	// Input for Array 1
    printf("How many elements you want to insert in 1st Array : ");
    scanf("%d",&a);

    int* A=(int*)malloc(a*sizeof(int));
	
    for(i=0;i<a;i++)
    {
        printf("Enter %d element in 1st Array : ",i+1);
        scanf("%d",A+i);
    }
	
	// Input for Array 2
	printf("How many elements you want to insert in 2nd Array : ");
    scanf("%d",&b);
	
	int* B=(int*)malloc(b*sizeof(int));
	
	for(i=0;i<b;i++)
    {
        printf("Enter %d element in 2nd Array : ",i+1);
        scanf("%d",B+i);
    }
	
	// Print 1st Array
    printf("1st Array :   ");
    for(i=0;i<a;i++)
        printf("%d   ",*(A+i));
	
	// Print 2nd Array
    printf("\n2nd Array :   ");
    for(i=0;i<b;i++)
        printf("%d   ",*(B+i));
	
	// Union of 2 Arrays
	int* uni=(int*)malloc((a+b)*sizeof(int));
	d=a;
	for(i=0;i<a;i++)
		*(uni+i)=*(A+i);
	
	for(i=0;i<b;i++)
	{
		flag=0;
		for(j=0;j<a;j++)
		{
			if(*(B+i) == *(A+j))
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			*(uni+d)=*(B+i);
			d++;
		}
	}
	
	// Print Union of 2 Arrays
    printf("\nUnion of 2 Arrays :   ");
    for(i=0;i<d;i++)
        printf("%d   ",*(uni+i));
	
	// Intersection of 2 Arrays
	int* inter=(int*)malloc((a<b?a:b)*sizeof(int));
	c=0;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			if(*(A+i) == *(B+j))
			{
				*(inter+c)=*(A+i);
				c++;
				break;
			}
		}
	}
	
	// Print Intersection of 2 Arrays
    printf("\nIntersection of 2 Arrays :   ");
    for(i=0;i<c;i++)
        printf("%d   ",*(inter+i));
}