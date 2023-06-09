/*
Q 5. Write a C program which accept two strings from user and compare two strings without case sensitivity. If both strings are equal then return 0 otherwise return difference between first mismatch character.
		Eg:
			Input String1: india Is mY cOuntry 
			Input String2: INDIA is MY countrY 
			Output: Both strings are equal.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,diff,big,small;
	char str[100],abc[100];
	
	printf("Enter String 1=");
	fgets(str,sizeof(str),stdin);
	printf("Enter String 2=");
	fgets(abc,sizeof(abc),stdin);
	
	i=0;
	diff=0;
	while(str[i]!='\n' || abc[i]!='\n')
	{
		big=str[i]>abc[i] ? str[i]:abc[i];
		small=str[i]<abc[i] ? str[i]:abc[i];
		if(str[i]!=abc[i] && (big-32!=small))
		{
			diff=big-small;
			break;
		}
		i++;
	}
	
	if(diff==0)
		printf("Both strings are equal.");
	else		
		printf("Both strings are NOT equal and difference between first mismatch character is %d.",diff);
}