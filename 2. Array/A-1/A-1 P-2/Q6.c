/*
Q 6. Write a C Program to Find 2 Elements in the Array such that Difference between them is Largest
*/
#include<stdio.h>
void main()
{
	int i,max,min,large,arr[10];
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("Enter a Element at index %d in Array = ",i);
		scanf("%d",&arr[i]);
	}
	printf("Array =");
	for(i=0;i<10;i++)
	{
		printf("\t%d",arr[i]);
	}
	max=arr[0];
	for(i=1;i<10;i++)
	{
		if(max<arr[i])
			max=arr[i];
	}
	
	min=arr[0];
	for(i=1;i<10;i++)
	{
		if(min>arr[i])
			min=arr[i];
	}
	
	large=max-min;
	printf("\nLargest Difference of %d and %d = %d",max,min,large);
}

/*
#include<stdio.h>
void main()
{
	int i,j,diff,large,n1,n2,t1,t2,arr[10];
	i=0;
	while(i<10)
	{
		printf("Enter element at index %d : ",i);
		scanf("%d",&arr[i]);
		i++;
	}
	printf("Array = ");
	i=0;
	while(i<10)
	{
		printf("%d\t",arr[i]);
		i++;
	}
	t1=arr[0];
	t2=arr[0];
	large=t1-t2;
	n1=t1;
	n2=t2;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			t1=arr[i];
			t2=arr[j];
			diff=t1-t2;
			if(large < diff)
			{
				large=diff;
				n1=t1;
				n2=t2;
			}
		}
	}
	printf("\nLargest Difference of %d and %d = %d",n1,n2,large);
}*/