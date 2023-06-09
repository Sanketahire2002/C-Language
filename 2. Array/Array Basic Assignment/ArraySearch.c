/*
Q. Searching Element in Array and Time Complexity
*/
#include<stdio.h>
void main()
{
	int i,j,n,flag,arr[10];
	char c;
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
	printf("\nEnter element to search : ");
	scanf("%d",&n);
	flag=0;
	for(i=0;i<10;i++)
	{
		if(n==arr[i])
		{
			printf("Element %d present at index %d.",n,i);
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("Element is Not Present.");
	/*
		Time Complexity :
			Best Case : O(1)
			Moderate/Average Case : O(n/2)
			Worst Case : O(n)
	*/
	flag=0;
	j=9;
	for(i=0;i<=j;i++)			// for reducing time complexity upto O(n/2)
	{
		if(n==arr[i] || n==arr[j])
		{
			printf("Element %d present at index %d.",n,i);
			flag=1;
			break;
		}
		j--;
	}
	if(flag==0)
		printf("\nElement is Not Present.");
}