/*
Q 5. Write a C program which accept two strings from user and compare two strings without case sensitivity. If both strings are equal then return 0 otherwise return difference between first mismatch character.
		Eg:
			Input String1: india Is mY cOuntry 
			Input String2: INDIA is MY countrY 
			Output: Both strings are equal.
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i,diff,big,small;
	int size;
    char* ptr=NULL;
	char* q=NULL;
	char ch;
	
	size=1;
	ptr=(char*)malloc(size*sizeof(char));
	*ptr='\0';
	printf("Enter String 1 =");
	i=0;
	do
	{	
		scanf("%c",&ch);
		if(ch!='\n')
		{
			ptr=(char*)realloc(ptr,(size++)*sizeof(char));
			*(ptr+i)=ch;
			*(ptr+(i+1))='\0';
			i++;		
		}
	}while(ch!='\n');

	size=1;
	q=(char*)malloc(size*sizeof(char));
	*q='\0';
	printf("Enter String 2 =");
	i=0;
	do
	{	
		scanf("%c",&ch);
		if(ch!='\n')
		{
			q=(char*)realloc(q,(size++)*sizeof(char));
			*(q+i)=ch;
			*(q+(i+1))='\0';
			i++;		
		}
	}while(ch!='\n');

	printf("String 1 =%s",ptr);
	printf("\nString 2 =%s",q);
	
	i=0;
	diff=0;
	while(*(ptr+i)!='\0' || *(q+i)!='\0')
	{
		big=*(ptr+i)>*(q+i) ? *(ptr+i):*(q+i);
		small=*(ptr+i)<*(q+i) ? *(ptr+i):*(q+i);
		if(*(ptr+i)!=*(q+i) && (big-32!=small))
		{
			diff=big-small;
			break;
		}
		i++;
	}
	
	if(diff==0)
		printf("\nBoth strings are equal.");
	else		
		printf("\nBoth strings are NOT equal and difference between first mismatch character is %d.",diff);

	free(ptr);
	free(q);
	getch();
}