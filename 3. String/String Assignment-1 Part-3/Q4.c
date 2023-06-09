/*
Q 4. Write a C program which accept two strings from user and compare only first N characters of two strings. If both strings are equal till first N characters then return 0 otherwise return difference between first mismatch character.
		Eg:
			Input String1: Ramayan 
			Input String2: Ramanacharya 
			Input of N: 4
			Output: Both strings are equal.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,diff;
	char str[100],abc[100];
	
	printf("Enter String 1=");
	fgets(str,sizeof(str),stdin);
	printf("Enter String 2=");
	fgets(abc,sizeof(abc),stdin);
	printf("Enter n =");
	scanf("%d",&n);
	i=0;
	diff=0;
	while(i<n)
	{
		if(str[i]!=abc[i])
		{	
			diff=str[i]>abc[i] ? str[i]-abc[i] : abc[i]-str[i] ;
			break;
		}
		
		i++;
	}
	if(diff==0)
		printf("Both strings are equal.");
	else		
		printf("Both strings are NOT equal and difference between first mismatch character is %d.",diff);
	
}