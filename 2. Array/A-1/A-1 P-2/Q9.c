/*
Q 9. Write C Program to Find the two Elements such that their Sum is Closest to given number
*/
#include<stdio.h>
void main()
{
	int i,j,n,diff,newdiff,n1,n2,flag,a[10];
	for(i=0;i<10;i++)
	{
		printf("Enter element at index %d in a array : ",i);
		scanf("%d",&a[i]);
	}
	printf("Array =  ");
	for(i=0;i<10;i++)
		printf("%d\t",a[i]);
	printf("\nEnter number to find closest number = ");
	scanf("%d",&n);
	diff=n>(a[0]+a[0]) ? (n-(a[0]+a[0])):(a[0]+a[0]-n);
	n1=a[0];
	n2=a[0];
	flag=0;
	if(diff==0)
		flag=1;
	for(i=0;i<10&&flag==0;i++)
	{
		for(j=0;j<10;j++)
		{
			newdiff=n>(a[i]+a[j]) ? (n-(a[i]+a[j])):(a[i]+a[j]-n);
			if(newdiff < diff)
			{
				diff=newdiff;
				n1=a[i];
				n2=a[j];
				if(diff==0)
				{
					flag=1;
					break;
				}
			}
		}
	}
	printf("\nThe two numbers whose sum is closest to the given number are %d and %d with minimum difference %d.",n1,n2,diff);
}