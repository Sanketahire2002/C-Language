/*
Q 8. Write a C program to check whether given strings are Anagram strings or not.
		Eg:
			Input String1: abccd
			Input String2: cbcda
			Output String: Strings are anagram
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    int i,j,flag;
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
	while(*(ptr+i)!='\0')
	{
		flag=0;
		j=0;
		while(*(q+j)!='\0')
		{
			if(*(ptr+i)==*(q+j))
			{
				flag=1;
				break;
			}
			j++;
		}
		if(flag==0)
			break;
		i++;
	}
	i=0;
	if(flag==1)
		while(*(q+i)!='\0')
		{
			flag=1;
			j=0;
			while(*(ptr+j)!='\0')
			{
				if(*(ptr+i)==*(q+j))
				{
					flag=2;
					break;
				}
				j++;
			}
			if(flag==1)
				break;
			i++;
		}
	printf("\n");
	if(flag==2)
		printf("Strings are Anagram strings");
	else
		printf("Strings are NOT Anagram strings");
	
	free(ptr);
	free(q);
	getch();
}