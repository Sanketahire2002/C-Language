/*
Q 8. Write a program in C to count the frequency of each element of an array.
*/
#include<stdio.h>
void main()
{
	int i,j,k,count,flag,arr[10];
	for(i=0;i<10;i++)
	{
		printf("Enter element at index %d : ",i);
		scanf("%d",&arr[i]);
	}
	printf("Array =");
	for(i=0;i<10;i++)
	{
		printf("\t%d",arr[i]);
	}
	for(i=0;i<10;i++)
	{
		flag=0;
		count=1;
		for(k=i-1;k>=0;k--)
		{
			if(arr[i]==arr[k])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			for(j=i+1;j<10;j++)
			{
				if(arr[i]==arr[j])
				{
					count++;
				}
			}
			printf("\n%d -> %d",arr[i],count);
		}			
	}
}