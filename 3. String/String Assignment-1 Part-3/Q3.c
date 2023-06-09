/*
Q 3. Write a C program which accept two strings from user and compare two strings. If both strings are 	equal then return 0 otherwise return difference between first mismatch character.
	Eg:
	Input String1: India is my country. 
	Input String2: India is my country. 
	Output: Both strings are equal.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,diff;
	char str[100],abc[100];
	
	printf("Enter String 1=");
	fgets(str,sizeof(str),stdin);
	printf("Enter String 2=");
	fgets(abc,sizeof(abc),stdin);
	
	i=0;
	diff=0;
	while(str[i]!='\n' || abc[i]!='\n')
	{
		if(str[i]!=abc[i])
		{	
			diff=str[i]>abc[i] ? str[i]-abc[i] : abc[i]-str[i] ;
			break;
		}
		
		i++;
	}
	if(diff==0 && str[i]=='\n' && abc[i]=='\n')
		printf("Both strings are equal.");
	else		
		printf("Both strings are NOT equal and difference between first mismatch character is %d.",diff);
	
}