/*
Q 10. Write C Program to Find Union & Intersection of 2 Arrays
*/
#include<stdio.h>
void main()
{
	int i,un,in,j,flag,a[10],b[10],uni[20],inter[10];
	i=0;
	printf("Insertion in 1st Array :\n");
	while(i<10)
	{
		printf("\tEnter element at index %d : ",i);
		scanf("%d",&a[i]);
		uni[i]=a[i];
		i++;
	}
	printf("Insertion in 2nd Array :\n");
	i=0;
	while(i<10)
	{
		printf("\tEnter element at index %d : ",i);
		scanf("%d",&b[i]);
		i++;
	}
	printf("1st Array =\t");
	i=0;
	while(i<10)
	{
		printf("%d\t",a[i]);
		i++;
	}
	printf("\n2nd Array =\t");
	i=0;
	while(i<10)
	{
		printf("%d\t",b[i]);
		i++;
	}
	
	// Union of two Arrays
	un=10;
	for(i=0;i<10;i++)
	{
		flag=0;
		for(j=0;j<10;j++)
		{
			if(b[i] == a[j])
			{
				flag=1;
				break;
			}
		}
		if(flag == 0)
		{
			uni[un]=b[i];
			un++;
		}
	}
	printf("\nUnion =\t\t");
	for(i=0; i < un ;i++)
	{
		printf("%d\t",uni[i]);
	}
	
	// Intersection of two Arrays
	in=0;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(a[i] == b[j])
			{
				inter[in]=a[i];
				in++;
				break;
			}
		}
	}
	printf("\nIntersection =\t");
	for(i=0; i < in ;i++)
	{
		printf("%d\t",inter[i]);
	}
}