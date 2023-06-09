/*
Q 4. Write a C program which accept two strings from user and compare only first N characters of two strings. If both strings are equal till first N characters then return 0 otherwise return difference between first mismatch character.
		Eg:
			Input String1: Ramayan 
			Input String2: Ramanacharya 
			Input of N: 4
			Output: Both strings are equal.
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i,n,diff;
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
	
	printf("\nEnter n =");
	scanf("%d",&n);
	i=0;
	diff=0;
	while(i<n)
	{
		if(*(ptr+i)!=*(q+i))
		{	
			diff=*(ptr+i)>*(q+i) ? *(ptr+i)-*(q+i) : *(q+i)-*(ptr+i) ;
			break;
		}
		
		i++;
	}
	if(diff==0)
		printf("Both strings are equal.");
	else		
		printf("Both strings are NOT equal and difference between first mismatch character is %d.",diff);

	free(ptr);
	free(q);
	getch();
}