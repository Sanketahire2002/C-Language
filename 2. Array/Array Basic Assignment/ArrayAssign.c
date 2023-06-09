/*
Q. Array Definition, Declaration, Initialization and Assignment Basic Programs
*/
#include<stdio.h>
void main()
{	
	int arr[5];							// Definition		
										// Declaration : extern int arr[5];
	int ar2[7]={13,14,15,16,17,18,17};	// Declaration + Initialization
	int ar3[7]={13,14};
	int ar4[]={11,12,13,14,15};
	int arr5['A'];
	arr5[5]=111;						// Assignment
	int i;
	printf("\n5th Element = %d",arr5[5]);	// Prints Value
	printf("\n5th Element = %d",&arr5[5]);  // Prints Address
	
	/*
		Formula to find address of element in array :
			Base Address + ( Index * size of datatype )
			e.g. int arr[5];
				e.g. base address=100
				then 100 + 5 (index) * 4 (size of datatype int)
					= 100 + 20
					= 120
				So we got address 120 in array arr which specify the 5th index in array
			then compiler do *(120) means value at 120
	*/
	
	printf("Enter elements =  ");
	for(i=0 ; i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Elements in Array =");
	for(i=0 ; i<5;i++)
	{
		printf("\t%d",arr[i]);
	}
	
	printf("\nElements in Array 2 =  ");
	for(i=0 ; i<7;i++)
	{
		printf("%d\t",ar2[i]);
	}
	
	printf("\nElements in Array 3 =  ");
	for(i=0 ; i<7;i++)
	{
		printf("%d\t",ar3[i]);
	}
	
	printf("\nElements in Array 4 =  ");
	for(i=0 ; i<5;i++)
	{
		printf("%d\t",ar4[i]);
	}
	
}