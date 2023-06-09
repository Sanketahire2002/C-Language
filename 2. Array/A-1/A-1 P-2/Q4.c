/*
Q 4. Write a C Program to Find the Number of Elements in an Array
*/

#include<stdio.h>

void fun(int arr[])
{
	int size;
	
	printf("\n\nTo find total size of array in Function =>\n");
	
	size=sizeof(*arr);
	printf("\n\tSize of Taken Array arr in function = %d",size);
	
	size=sizeof(*arr) / sizeof(int);
	printf("\n\tNumber of elements in Array arr in function = %d",size);
	
	// While passing array to function , function only take its base address so we get size of only of one element which is 4 and number of element as 1
}

void main()
{
	int i,size;
	int arr[100];
	char brr[100];
	double crr[100];
	
	printf("\nTo find total size of array =>\n");
	
	size=sizeof(arr);	// array of 100 elements * size of type of array = 100 * 4 = 400
	printf("\n\tSize of Array int arr[100] = %d",size);
	
	size=sizeof(brr);	// array of 100 elements * size of type of array = 100 * 1 = 100
	printf("\n\tSize of Array char brr[100] = %d",size);
	
	size=sizeof(crr);	// array of 100 elements * size of type of array = 100 * 8 = 800
	printf("\n\tSize of Array double crr[100] = %d",size);
	
	printf("\n\nTo find number of elements in array =>\n");
	
	size=sizeof(arr) / sizeof(int);	
	// no. of elements = Total size of array / size of type of array = 400 / 4 = 100
	printf("\n\tNumber of elements in Array int arr[100] = %d",size);
	
	size=sizeof(brr) / sizeof(char);
	// no. of elements = Total size of array / size of type of array = 100 / 1 = 100
	printf("\n\tNumber of elements in Array char brr[100] = %d",size);
	
	size=sizeof(crr) / sizeof(double);	
	// no. of elements = Total size of array / size of type of array = 800 / 8 = 100
	printf("\n\tNumber of elements in Array double crr[100] = %d",size);
	
	for(i=0;i<100;i++)
	{
		arr[i]=i+1;
	}	
	
	fun(arr);
	
	printf("\n\n");
}