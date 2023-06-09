/*
Q 11. Write a C program to find the maximum sum of a subsequent numbers in given array.
*/
#include<stdio.h>
void main()
{
	int i,j,max,s1,s2,arr[10];
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
	j=0;
	max=arr[j];
	i=0;
	for(j=1;j<10;j++)
	{
		if(max<arr[j])
		{
			max=arr[j];
			i=j;
		}
	}
	s1=-9999;
	s2=-9999;
	if(i != 0)
		s1=max+arr[i-1];
	if(i != 9)
		s2=max+arr[i+1];
	if(s1>=s2)
		printf("\nSubsequent Elements %d and %d with maximum sum = %d",arr[i-1],arr[i],s1);
	else
		printf("\nSubsequent Elements %d and %d with maximum sum = %d",arr[i],arr[i+1],s2);
}


/*
#include<stdio.h>
void main()
{
	int i,sum,max,t1,t2,n1,n2,arr[10];
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
	t2=arr[1];
	max=t1+t2;
	n1=t1;
	n2=t2;
	for(i=1;i<9;i++)
	{
		t1=arr[i];
		t2=arr[i+1];
		sum=t1+t2;
		if(max < sum)
		{
			max=sum;
			n1=t1;
			n2=t2;
		}
	}
	printf("\nMaximum Sum of elements %d and %d = %d",n1,n2,max);
}*/